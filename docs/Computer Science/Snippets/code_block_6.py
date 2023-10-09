import random
import string

def random_plate():
    chars = ''.join(random.choices(string.ascii_uppercase, k=3))
    digits = ''.join(random.choices(string.digits, k=3))
    return f"S{chars}{digits}"

plate_count = 0
current_match = '000'
while current_match != '999':
    plate = random_plate()
    plate_count += 1
    if plate.endswith(current_match):
        current_match = str(int(current_match) + 1).zfill(3)

print(f"It took {plate_count} iterations.")
