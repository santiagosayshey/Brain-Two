gcc -o prod_cons prod_cons.c buffer.c assert.c -lpthread

prod_cons

P: Starting
C: Starting
P: |one|
P: |two|
P: |three|
P: |four|
P: |five|
P: |six|
P: |seven|
P: |eight|
C: |one|
C: |two|
C: |three|
C: |four|
C: |five|
C: |six|
C: |seven|
C: |eight|
P: |nine|
P: |ten|
P: ||
P: Ending
C: |nine|
C: |ten|
C: ||
C: Ending
