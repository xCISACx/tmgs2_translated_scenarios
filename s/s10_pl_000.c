section "s10_pl_000"{
    int var0;
    Background_Bg_GS2("BG_EX143_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "... Well, my fortune this year is...");
    var0 = 0;
    var0 = System_Randam(0, 5);
    switch (var0){
        case 0:
        Message_Who(0);
        Message_MsgDisp("主人公", "Hooray, excellent luck!!\nThis year seems like it's gonna be\ngood!");
        Parameter_AddPl1Param(22, #10);
        break ;
        case 1:
        Message_Who(0);
        Message_MsgDisp("主人公", "Good luck! Yeah, nice!");
        Parameter_AddPl1Param(22, #5);
        break ;
        case 2:
        Message_Who(0);
        Message_MsgDisp("主人公", "Average luck.\nWell, it's a good one... I guess?");
        Parameter_AddPl1Param(22, #2);
        break ;
        case 3:
        Message_Who(0);
        Message_MsgDisp("主人公", "Uncertain luck...\nWell, it's okay I guess.\nIt could be good luck.");
        Parameter_AddPl1Param(22, #1);
        break ;
        case 4:
        Message_Who(0);
        Message_MsgDisp("主人公", "Aaahh, bad luck! How awful...");
        Parameter_AddPl1Param(22, 5);
        break ;
        case 5:
        Message_Who(0);
        Message_MsgDisp("主人公", "T-Terrible luck!? Ugh...\nThis is too awful...");
        Parameter_AddPl1Param(22, 10);
        break ;
        }
    }
