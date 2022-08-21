## Known
    ## viewership Table

## Goals
    ## Write query to compare Viewership on mobile vs laptops
    ## Total viewership for mobile and mobiledevices
## Table Related
    ## Only viewership


SELECT SUM(
      CASE WHEN device_type= 'laptop' THEN 1 ELSE 0 end
) as laptop_viewership, SUM(CASE WHEN device_type in ('phone', 'tablet') THEN 1 else 0 end)
FROM viewership
