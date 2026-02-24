section "z44_pl_000"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_2", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_2", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_2", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_2", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "When I look back on the first year\nand this year...");
    if (Parameter_Max_Command(0) == 9){
        Message_Who(0);
        Message_MsgDisp("主人公", "I slept well...");
        }
    else if (Parameter_Max_Command(0) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "I studied often.");
        }
    else if (Parameter_Max_Command(0) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "I exercised well.");
        }
    else if (Parameter_Max_Command(0) == 4){
        Message_Who(0);
        Message_MsgDisp("主人公", "I looked trendy in plaid.");
        }
    else if (Parameter_Max_Command(0) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "Dressed up stylishly well.");
        }
    else if (Parameter_Max_Command(0) == 5){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Toudou＊＊｝ and I had a\ngood time.");
        }
    else if (Parameter_Max_Command(0) == 6){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Onoda＊＊｝ and I got\nalong pretty well.");
        }
    else if (Parameter_Max_Command(0) == 7){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Nishimoto＊＊｝ and I hung out\ntogether.");
        }
    else if (Parameter_Max_Command(0) == 8){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Mizushima＊＊｝ and I enjoyed\nhaving fun.");
        }
    else if (Parameter_Max_Command(0) == 10){
        Message_Who(0);
        Message_MsgDisp("主人公", "I made great efforts in club\nactivities.");
        }
    else if (Parameter_Max_Command(0) == 11){
        Message_Who(0);
        Message_MsgDisp("主人公", "I did very well in Student Council.");
        }
    else if (Parameter_Max_Command(0) == 12){
        Message_Who(0);
        Message_MsgDisp("主人公", "I worked hard at my part-time job.");
        }
    else if (Parameter_Max_Command(0) == 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "I drew pictures very well.");
        }
    Message_Who(0);
    Message_MsgDisp("主人公", "...\nI wonder about places like this...");
    System_Call_GS2("Z44", "S1", 0);
    System_Call_GS2("Z44", "S1", 1);
    }
