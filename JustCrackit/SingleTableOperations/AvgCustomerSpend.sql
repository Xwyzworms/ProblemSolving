SELECT  EXTRACT(YEAR from payment_ts) as years,
        ExtRacT(MONTH from payment_ts) as months,
        SUM(amount) / COUNT(customer_id) as Avg_customer_spend
        FROM payment
GROUP by years,months
