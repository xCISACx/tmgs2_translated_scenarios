section "a04_pl_000"{
    int var0;
    int var1;
    int var2;
    int var3;
    int var4;
    int var5;
    int var6;
    Background_Bg_GS2("BG_SC301_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(A \"self introduction\" sheet.\nLet me see...)");
    Message_Who(0);
    Message_MsgDisp("Question 1", "Why did you think to enroll in the\nacademy?");
    Message_MsgSel("Because it's famous for academics.", "I like the uniform so I enrolled.", "Because it's famous for sports.");
    switch (Message_TextSelect()){
        case 0:
        var0 = var0 + 3;
        var1 = var1 - 3;
        break ;
        case 1:
        var2 = var2 + 2;
        var3 = var3 + 2;
        break ;
        case 2:
        var0 = var0 - 3;
        var1 = var1 + 3;
        break ;
        }
    Message_Who(0);
    Message_MsgDisp("Question 2", "What are your hobbies?");
    Message_MsgSel("Art appreciation?", "Shopping?", "Reading?");
    switch (Message_TextSelect()){
        case 0:
        var3 = var3 + 2;
        break ;
        case 1:
        var2 = var2 + 3;
        break ;
        case 2:
        var0 = var0 + 2;
        var3 = var3 - 1;
        break ;
        }
    Message_Who(0);
    Message_MsgDisp("Question 3", "What do you want to try, after\nbecoming a high schooler?");
    Message_MsgSel("I want to try working.", "Experience my youth via club activities.", "Love, of course▼");
    switch (Message_TextSelect()){
        case 0:
        var0 = var0 - 2;
        var1 = var1 + 1;
        var2 = var2 + 1;
        break ;
        case 1:
        var0 = var0 + 2;
        var1 = var1 + 2;
        var3 = var3 + 1;
        break ;
        case 2:
        var2 = var2 + 2;
        var3 = var3 + 2;
        break ;
        }
    if ((var2 == 4) && (var1 == 4)){
        Parameter_InPl1Param(323, 4);
        }
    else if ((var0 > var1) && (var0 > var2) && (var0 > var3)){
        if (var0 >= 4){
            Parameter_InPl1Param(323, 0);
            }
        else {
            var4 = 1;
            }
        }
    else if ((var1 > var0) && (var1 > var2) && (var1 > var3)){
        if (var1 >= 4){
            Parameter_InPl1Param(323, 3);
            }
        else {
            var4 = 1;
            }
        }
    else if ((var2 > var0) && (var2 > var1) && (var2 > var3)){
        if (var2 >= 4){
            Parameter_InPl1Param(323, 2);
            }
        else {
            var4 = 1;
            }
        }
    else if ((var3 > var0) && (var3 > var1) && (var3 > var2)){
        if (var3 >= 4){
            Parameter_InPl1Param(323, 1);
            }
        else {
            var4 = 1;
            }
        }
    if (var4 == 1){
        Parameter_InPl1Param(323, 4);
        }
    Message_Who(0);
    Message_MsgDisp("Question 4", "What type of guy do you like?");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Eh!? Why is this question here...\nAh, whatever...)");
    Message_MsgSel("Kind...", "Cool...", "A little pretentious...");
    switch (Message_TextSelect()){
        case 0:
        var5 = 0;
        break ;
        case 1:
        var5 = 1;
        break ;
        case 2:
        var5 = 2;
        break ;
        }
    Message_Who(0);
    Message_MsgDisp("主人公", "(And also...)");
    Message_MsgSel("A dependable person would be nice.", "Obviously, a cool person.", "An interesting person.");
    switch (Message_TextSelect()){
        case 0:
        var6 = 3;
        break ;
        case 1:
        var6 = 4;
        break ;
        case 2:
        var6 = 5;
        break ;
        }
    if ((var5 == 0) && (var6 == 3)){
        Parameter_InPl1Param(312, 7);
        }
    else if ((var5 == 0) && (var6 == 4)){
        Parameter_InPl1Param(312, 1);
        }
    else if ((var5 == 0) && (var6 == 5)){
        Parameter_InPl1Param(312, 5);
        }
    else if ((var5 == 1) && (var6 == 3)){
        Parameter_InPl1Param(312, 2);
        }
    else if ((var5 == 1) && (var6 == 4)){
        Parameter_InPl1Param(312, 1);
        }
    else if ((var5 == 1) && (var6 == 5)){
        Parameter_InPl1Param(312, 3);
        }
    else if ((var5 == 2) && (var6 == 3)){
        Parameter_InPl1Param(312, 8);
        }
    else if ((var5 == 2) && (var6 == 4)){
        Parameter_InPl1Param(312, 4);
        }
    else if ((var5 == 2) && (var6 == 5)){
        Parameter_InPl1Param(312, 6);
        }
    Message_Who(0);
    Message_MsgDisp("主人公", "(*phew*, I finally finished it!)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
