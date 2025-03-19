# Write your MySQL query statement below

-- with start as (
--     select *
--     -- sum(timestamp) over(Partition by machine_id) as start_time
--     from Activity
--     where activity_type = 'start'
-- ),
-- end as (
--     select *
--     -- sum(timestamp) over(Partition by machine_id) as end_time
--     from Activity
--     where activity_type = 'end'
-- )
-- select distinct start.machine_id, ROUND(avg(end.timestamp - start.timestamp) over
-- (partition by start.machine_id), 3) as processing_time
-- from start
-- inner join end
-- on start.machine_id = end.machine_id
-- and start.process_id = end.process_id;


-- with start as (
--     select *
--     -- sum(timestamp) over (partition by machine_id) as start_sum
--     from Activity where activity_type = 'start'
-- )
-- , end as (
--     select *
--     -- sum(timestamp) over (partition by machine_id) as end_sum
--     from Activity where activity_type = 'end'
-- )

-- select start.machine_id,
-- ROUND(AVG(end.timestamp - start.timestamp), 3) as processing_time
-- from start
-- inner join end
-- on start.machine_id = end.machine_id
-- group by start.machine_id
-- order by start.machine_id;


with start as (
select * from Activity where activity_type = 'start'
),
end as (
select * from Activity where activity_type = 'end'
)
select start.machine_id,
round(AVG(end.timestamp-start.timestamp), 3) as processing_time
from start inner join end on start.machine_id = end.machine_id
group by start.machine_id order by start.machine_id;






