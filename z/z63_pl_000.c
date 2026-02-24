section "z63_pl_000"{
    System_GlobalWork(0, 0, 0);
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_WI_0", #1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_WI_0", #1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_WI_0", #1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_WI_0", #1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Well, the final exam is today.\nI'll do my best!\nMy career course is...");
    int var1 = 0;
    var1 = Parameter_Master_Sele();
    if (var1 == 22){
        System_Call_GS2("Z63", "PL", 1);
        }
    else if (var1 == 23){
        System_Call_GS2("Z63", "PL", 2);
        }
    else if (var1 == 24){
        System_Call_GS2("Z63", "PL", 3);
        }
    else if (var1 == 25){
        System_Call_GS2("Z63", "PL", 4);
        }
    else if (var1 == 26){
        System_Call_GS2("Z63", "PL", 5);
        }
    else if (var1 == 27){
        System_Call_GS2("Z63", "PL", 6);
        }
    else if ((var1 == 15) || (var1 == 16)){
        System_Call_GS2("Z63", "PL", 7);
        }
    else if (var1 == 17){
        System_Call_GS2("Z63", "PL", 8);
        }
    else if (var1 == 18){
        System_Call_GS2("Z63", "PL", 9);
        }
    else if (var1 == 19){
        System_Call_GS2("Z63", "PL", 10);
        }
    else if (var1 == 20){
        System_Call_GS2("Z63", "PL", 11);
        }
    else if (var1 == 21){
        System_Call_GS2("Z63", "PL", 12);
        }
    else {
        if (Parameter_GetPl1Param(24) == 0){
            Message_MsgSel("Take the university entrance exam", "Take the employment exam instead");
            switch (Message_TextSelect()){
                case 0:
                Message_Who(0);
                Message_MsgDisp("主人公", "I'll take a university exam!\nWhich university exam should I take?");
                Message_MsgSel("First-rate university", "Second-rate university", "Third-rate university");
                switch (Message_TextSelect()){
                    case 0:
                    Parameter_InPl1Param(15, Parameter_SinroJudge(1));
                    Message_Who(0);
                    Message_MsgDisp("主人公", "A first-rate university.\nI'm gonna aim for the top!");
                    break ;
                    case 1:
                    Parameter_InPl1Param(15, Parameter_SinroJudge(2));
                    Message_Who(0);
                    Message_MsgDisp("主人公", "A second-rate university.\nI have to remain calm and\nlevel-headed.");
                    break ;
                    case 2:
                    Parameter_InPl1Param(15, Parameter_SinroJudge(3));
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I intend to make it to a third-rate\nuniversity.\nThis will be good for me.");
                    break ;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "I want to find employment!\nWhich company should I choose?");
                Message_MsgSel("First-rate company", "Second-rate company", "Third-rate company");
                switch (Message_TextSelect()){
                    case 0:
                    Parameter_InPl1Param(15, Parameter_SinroJudge(4));
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I'll make it to a first-rate\ncompany.\nI'm aiming for the top!");
                    break ;
                    case 1:
                    Parameter_InPl1Param(15, Parameter_SinroJudge(5));
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I'll make it to a second-rate\ncompany.\nI have to remain calm and\nlevel-headed.");
                    break ;
                    case 2:
                    Parameter_InPl1Param(15, Parameter_SinroJudge(6));
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I'll make it to a third-rate\ncompany.\nThis will be good for me.");
                    break ;
                    }
                break ;
                }
            }
        else {
            Message_MsgSel("Take an employment exam", "Take the university entrance exam instead");
            switch (Message_TextSelect()){
                case 0:
                Message_Who(0);
                Message_MsgDisp("主人公", "I want to find employment!\nWhich company should I choose?");
                Message_MsgSel("First-rate company", "Second-rate company", "Third-rate company");
                switch (Message_TextSelect()){
                    case 0:
                    Parameter_InPl1Param(15, Parameter_SinroJudge(4));
                    Message_Who(0);
                    Message_MsgDisp("主人公", "A first-rate company.\nI'm aiming for the top!");
                    break ;
                    case 1:
                    Parameter_InPl1Param(15, Parameter_SinroJudge(5));
                    Message_Who(0);
                    Message_MsgDisp("主人公", "A second-rate company.\nI have to remain calm and\nlevel-headed.");
                    break ;
                    case 2:
                    Parameter_InPl1Param(15, Parameter_SinroJudge(6));
                    Message_Who(0);
                    Message_MsgDisp("主人公", "A third-rate company.\nIt'll be good for me.");
                    break ;
                    }
                break ;
                case 1:
                Message_Who(0);
                Message_MsgDisp("主人公", "A university entrance exam!\nWhich university exam should I take?");
                Message_MsgSel("First-rate university", "Second-rate university", "Third-rate university");
                switch (Message_TextSelect()){
                    case 0:
                    Parameter_InPl1Param(15, Parameter_SinroJudge(1));
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I'll make it to a first-rate\nuniversity.\nI'll aim for the top!");
                    break ;
                    case 1:
                    Parameter_InPl1Param(15, Parameter_SinroJudge(2));
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I'll make it to a second-rate\nuniversity.\nI have to remain calm and\nlevel-headed.");
                    break ;
                    case 2:
                    Parameter_InPl1Param(15, Parameter_SinroJudge(3));
                    Message_Who(0);
                    Message_MsgDisp("主人公", "I'll make it to a third-rate\nuniversity.\nIt'll be good for me.");
                    break ;
                    }
                break ;
                }
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (System_GlobalWork(0, 1) == 0){
        Background_Bg_GS2("BG_SCC10_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Finally, the final exam!\nI'll do my best with all my might!)");
        Music_PlayBGM(0, "MN_Y_00_002_000", 127, 40);
        Message_Who(0);
        Message_MsgDisp("　　　", "..............");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
