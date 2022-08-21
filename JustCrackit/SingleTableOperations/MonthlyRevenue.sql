
SELECT  EXTRACT(YEAR FROM DATE(payment_ts)) as YEARs,
        Extract(MONTH FROM DATE(payment_ts)) as MONTHs, SUM(amount)
        FROM payment 
        GROUP by YEARs, MONTHs
