
SELECT DATE(payment_ts) as dt, SUM(amount) 
FROM payment
WHERE DATE(payment_ts) BETWEEN '2020-06-01' AND '2020-06-30'
GROUP by dt