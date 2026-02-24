section "p75_pl_000"{
    int var0 = 0;
    Background_Bg_GS2("BG_SC230_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    var0 = Parameter_bunka_jyu(0);
    if (var0 == 1){
        if (Parameter_GetPl1Param(322) == 0){
            if (Parameter_GetPl1Param(338) < 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "The fashion show was a great\nsuccess!");
                Message_Who(0);
                Message_MsgDisp("主人公", "I want to make more elaborate\nclothes next year...\nParty dresses look nice!");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "The fashion show was a huge success.\nThere is nothing more I can say!");
                Message_Who(0);
                Message_MsgDisp("主人公", "...\nThey might have wanted to see\ndifferent types of clothes being\nworn.\nVery disappointing...");
                }
            }
        else if (Parameter_GetPl1Param(322) == 1){
            if (Parameter_GetPl1Param(338) < 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "The fashion show was a great\nsuccess!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Next year should be more gorgeous...\nAh, wedding dresses would look good!");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "The fashion show was a huge success.\nThere is nothing more I can say!");
                Message_Who(0);
                Message_MsgDisp("主人公", "...\nThey might have wanted to see\ndifferent types of clothes being\nworn.\nVery disappointing...");
                }
            }
        else {
            if (Parameter_GetPl1Param(338) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "The fashion show was a huge success!\nThe wedding dress theme really\ncompleted the Culture Festival.");
                }
            }
        }
    else {
        if (Parameter_GetPl1Param(322) == 0){
            if (Parameter_GetPl1Param(338) < 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "*Sigh* I failed...\nI caused trouble for everyone.\nI should reflect on this...");
                Message_Who(0);
                Message_MsgDisp("主人公", "I will try harder next year!\nThe clothes should be elaborate\nparty dresses, too...");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "*Sigh* I failed and caused trouble\nfor everyone...\nEven though that was the last\nCulture Festival...");
                Message_Who(0);
                Message_MsgDisp("主人公", "I should have gone to more club\nactivities...");
                }
            }
        else if (Parameter_GetPl1Param(322) == 1){
            if (Parameter_GetPl1Param(338) < 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "*Sigh* I failed and caused trouble\nfor everyone...");
                Message_Who(0);
                Message_MsgDisp("主人公", "I will be a senior next year.\nI will not leave with any regrets!");
                Message_Who(0);
                Message_MsgDisp("主人公", "A dress... I made a wedding dress!");
                }
            else {
                Message_Who(0);
                Message_MsgDisp("主人公", "*Sigh* I failed and caused trouble\nfor everyone...\nEven though that was the last\nCulture Festival...");
                Message_Who(0);
                Message_MsgDisp("主人公", "I wanted to wear and be judged on a\nvariety of clothes...\n*Sigh* This is regretful...");
                }
            }
        else {
            if (Parameter_GetPl1Param(338) == 3){
                Message_Who(0);
                Message_MsgDisp("主人公", "*Sigh* I failed and caused trouble\nfor everyone...\nEven though that was the last\nCulture Festival...");
                Message_Who(0);
                Message_MsgDisp("主人公", "...\nBut I guess I shouldn't regret\nwearing the wedding dress...");
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    if (Parameter_GetPl1Param(338) == 1){
        if (Parameter_ChkSpEvent("D01", "M4", 0) == 1){
            System_Call_GS2("D01", "M4", 0);
            }
        }
    Background_Bg_GS2("BG_SC130_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(338) < 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "(This is how this year's Culture\nFestival ended.)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(This is how my last year's high\nschool Culture Festival ended.)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddPl1Param(322, 1);
    switch (var0){
        case 1:
        Parameter_AddCh1Param(#1, 61, 2);
        Parameter_AddCh1Param(#1, 60, 4);
        Parameter_AddCh1Param(#1, 62, #4);
        break ;
        case 0:
        Parameter_AddCh1Param(#1, 61, 2);
        Parameter_AddCh1Param(#1, 60, #4);
        Parameter_AddCh1Param(#1, 62, 1);
        break ;
        }
    }
