min = 5

def find_golden_token():
    while True:
        dist = find_dist()
        if  dist <  min:
            min = dist
        return dist