SELECT EXTRACT(YEAR FROM payment_ts) as years,
        EXTRACT(MONTH FROM payment_ts) as months,
        COUNT(customer_id) as num_high_spend
FROM payment
where amount > 0.2
GROUP by years,months
