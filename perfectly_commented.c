/*|       Types       | Variables | Operators | Numbers |  Keywords  |   Functions   | Square brackets | Parentheses | Curly braces | Semicolons | Preprocessor directives  |*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/  #include<stdio.h>   /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/  #include<stdlib.h>  /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/ #include<inttypes.h> /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/   #include<math.h>   /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/  #include<string.h>  /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/   main    /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/      int      /*|*/   a   /*|*/   ,   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/    char**     /*|*/   b   /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/    {     /*|*/        /*|*/                      /*|*/
/*|*/ uint_fast64_t /*|*/   c   /*|*/   =   /*|*/     /*|*/        /*|*/ strtoumax /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   *   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/  ++   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   b   /*|*/   ,   /*|*/  0  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   ,   /*|*/ 10  /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/   if   /*|*/           /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   c   /*|*/   <   /*|*/  2  /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/ return /*|*/           /*|*/             /*|*/         /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/     char*     /*|*/   d   /*|*/   =   /*|*/     /*|*/        /*|*/  malloc   /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   c   /*|*/   /   /*|*/  8  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   +   /*|*/  1  /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/  memset   /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   *   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   d   /*|*/  ++   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   =   /*|*/ 53  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   ,   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   d   /*|*/  --   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   ,   /*|*/ 85  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   ,   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   c   /*|*/  >>   /*|*/  3  /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/  for   /*|*/           /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/ uint_fast64_t /*|*/   e   /*|*/   =   /*|*/  3  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/   e   /*|*/  <=   /*|*/     /*|*/        /*|*/   sqrt    /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   c   /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/   e   /*|*/  +=   /*|*/  2  /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/   if   /*|*/           /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   d   /*|*/       /*|*/     /*|*/        /*|*/           /*|*/      [      /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   e   /*|*/  >>   /*|*/  3  /*|*/        /*|*/           /*|*/      ]      /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/  >>   /*|*/  7  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   -   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   e   /*|*/   %   /*|*/  8  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   &   /*|*/  1  /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/  for   /*|*/           /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/ uint_fast64_t /*|*/   f   /*|*/   =   /*|*/  3  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   ,   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   g   /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/   g   /*|*/   =   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   e   /*|*/   *   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   f   /*|*/   ,   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   g   /*|*/  <=   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   c   /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/   f   /*|*/  +=   /*|*/  2  /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   d   /*|*/       /*|*/     /*|*/        /*|*/           /*|*/      [      /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   g   /*|*/  >>   /*|*/  3  /*|*/        /*|*/           /*|*/      ]      /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/  &=   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   ~   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/  1  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/  <<   /*|*/  7  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   -   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   g   /*|*/   &   /*|*/  7  /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/     char*     /*|*/   h   /*|*/   =   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/   puts    /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/    char[]     /*|*/       /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/    {     /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/ 50  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   ,   /*|*/  0  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/    }     /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   ,   /*|*/     /*|*/        /*|*/  malloc   /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/ uint_fast64_t /*|*/       /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/   log10   /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   c   /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   +   /*|*/  1  /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/  for   /*|*/           /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/ uint_fast64_t /*|*/   e   /*|*/   =   /*|*/  3  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/   e   /*|*/  <=   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   c   /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/   e   /*|*/  +=   /*|*/  2  /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/  for   /*|*/           /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/      int      /*|*/   g   /*|*/   =   /*|*/  0  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   ,   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   a   /*|*/   =   /*|*/  1  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/   a   /*|*/  &&   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   d   /*|*/       /*|*/     /*|*/        /*|*/           /*|*/      [      /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   e   /*|*/  >>   /*|*/  3  /*|*/        /*|*/           /*|*/      ]      /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/  >>   /*|*/  7  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   -   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   e   /*|*/   %   /*|*/  8  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   &   /*|*/  1  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/   a   /*|*/   =   /*|*/  0  /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/    {     /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/  for   /*|*/           /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/ uint_fast64_t /*|*/   f   /*|*/   =   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   e   /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/   f   /*|*/   >   /*|*/  0  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/   f   /*|*/  /=   /*|*/ 10  /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   h   /*|*/       /*|*/     /*|*/        /*|*/           /*|*/      [      /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   g   /*|*/  ++   /*|*/     /*|*/        /*|*/           /*|*/      ]      /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   =   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   f   /*|*/   %   /*|*/ 10  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   +   /*|*/ 48  /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/ while  /*|*/           /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   g   /*|*/  --   /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/   >   /*|*/  0  /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/  putchar  /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   g   /*|*/       /*|*/     /*|*/        /*|*/           /*|*/      [      /*|*/         /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   h   /*|*/       /*|*/     /*|*/        /*|*/           /*|*/      ]      /*|*/    )    /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/  putchar  /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/ 10  /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/    }     /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/   free    /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   h   /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/   free    /*|*/             /*|*/    (    /*|*/          /*|*/        /*|*/                      /*|*/
/*|*/               /*|*/   d   /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/    )    /*|*/          /*|*/   ;    /*|*/                      /*|*/
/*|*/               /*|*/       /*|*/       /*|*/     /*|*/        /*|*/           /*|*/             /*|*/         /*|*/    }     /*|*/        /*|*/                      /*|*/
