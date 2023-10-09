#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

#define BUFFER_SIZE 5

// Food buffer
int buffer[BUFFER_SIZE];
int count = 0;

// Mutex and condition variables
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;
pthread_cond_t food_available = PTHREAD_COND_INITIALIZER;
pthread_cond_t space_available = PTHREAD_COND_INITIALIZER;

// Cook (producer) function
void* cook(void* arg) {
    for (int i = 0; i < 20; i++) {
        pthread_mutex_lock(&mutex);

        // Wait for space to be available in the buffer
        while (count == BUFFER_SIZE) {
            pthread_cond_wait(&space_available, &mutex);
        }

        // Cook food and add it to the buffer
        buffer[count++] = i;
        printf("Cooked food #%d\n", i);

        // Signal that food is available
        pthread_cond_signal(&food_available);

        pthread_mutex_unlock(&mutex);
        sleep(1); // Simulate cooking time
    }

    return NULL;
}

// Customer (consumer) function
void* customer(void* arg) {
    for (int i = 0; i < 20; i++) {
        pthread_mutex_lock(&mutex);

        // Wait for food to be available in the buffer
        while (count == 0) {
            pthread_cond_wait(&food_available, &mutex);
        }

        // Remove food from the buffer and consume it
        int food = buffer[--count];
        printf("Consumed food #%d\n", food);

        // Signal that space is available
        pthread_cond_signal(&space_available);

        pthread_mutex_unlock(&mutex);
        sleep(2); // Simulate eating time
    }

    return NULL;
}

int main() {
    pthread_t cook_thread, customer_thread;

    // Create the cook and customer threads
    pthread_create(&cook_thread, NULL, cook, NULL);
    pthread_create(&customer_thread, NULL, customer, NULL);

    // Wait for the threads to finish
    pthread_join(cook_thread, NULL);
    pthread_join(customer_thread, NULL);

    printf("Cooking and consuming have completed.\n");
    return 0;
}
