SELECT MIN(cst.amount), MAX(cst.amount)
FROM (SELECT SUM(amount) as amount , customer_id FROM payment 
        WHERE DATE(payment_ts) BETWEEN '2020-06-01' AND '2020-06-30'
        GROUP by customer_id
) as cst