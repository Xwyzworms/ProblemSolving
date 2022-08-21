

SELECT ( CASE   WHEN A + B <= C OR B + C <= A OR A + C <= B
                    WHEN A = B AND B = C THEN "Equilateral"
                    WHEN A = B OR A = C THEN "Isosceles"
                    WHEN A + B >= C then "Not A Triangle"
                    WHEN A != B AND B != C AND A != C Then "Scalene" END )
FROM TRIANGLES