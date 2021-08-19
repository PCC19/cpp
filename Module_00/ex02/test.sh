./ub > output; cut -d ' ' -f2- 19920104_091532.log > a; cut -d ' ' -f2- output > b; diff a b
rm a b output

