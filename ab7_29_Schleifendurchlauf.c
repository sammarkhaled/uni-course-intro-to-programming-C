//Determine a function f(n) that, indicates how often the <AnweisungA> is executed during the execution of the program. (n ∈ N)
/*
a)  int i;
    for (i=1; i<=n+2; i++)
    {
    <AnweisungA>;
    }

b)  int i, j;
    for (i=1; i<=n+1; i++)
    {
        for (j=i; j<=2*n; j++)
        {
            <AnweisungA>;
        }
    }

c)  int i, j, k;
    for (i=1; i<=n; i++)
    {
        for (j=i; j<=n; j++)
        {
            for (k=1; k<=j; k++)
            {
                <AnweisungA>;
            }
        }
    }

    
a) f(n) = n + 2
b) f(n) = (2n+1)(n+1)-(n+1)(n+2)/2
c) f(n) = 1/6n(n+1)(n+2)
*/