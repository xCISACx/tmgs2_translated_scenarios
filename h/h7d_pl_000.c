section "h7d_pl_000"{
    Background_Bg_GS2("BG_SC700_SU_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Today is the last day of camp.");
    if (Parameter_GetSysParam(0) == 1){
        if (Parameter_GetBkParam(7, 52) <= 25){
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nI kind of get the feeling that I\ndidn't produce any decent results...");
            }
        else if ((Parameter_GetBkParam(7, 52) > 25) && (Parameter_GetBkParam(7, 52) <= 50)){
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I worked hard!");
            }
        else if (Parameter_GetBkParam(7, 52) > 50){
            Message_Who(0);
            Message_MsgDisp("主人公", "It seems like it was an enriching\ntraining camp!");
            }
        }
    else if (Parameter_GetSysParam(0) == 2){
        if (Parameter_GetBkParam(7, 52) <= 60){
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nI kind of get the feeling that I\ndidn't produce any decent results...");
            }
        else if ((Parameter_GetBkParam(7, 52) > 60) && (Parameter_GetBkParam(7, 52) <= 120)){
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, I did my best!");
            }
        else if (Parameter_GetBkParam(7, 52) > 120){
            Message_Who(0);
            Message_MsgDisp("主人公", "It seems like it was an enriching\ntraining camp!");
            }
        }
    else if (Parameter_GetSysParam(0) == 3){
        if (Parameter_GetBkParam(7, 52) <= 90){
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nI feel that in the end, I didn't\nproduce any results...");
            }
        else if ((Parameter_GetBkParam(7, 52) > 90) && (Parameter_GetBkParam(7, 52) <= 180)){
            Message_Who(0);
            Message_MsgDisp("主人公", "But I worked quite hard.");
            }
        else if (Parameter_GetBkParam(7, 52) > 180){
            Message_Who(0);
            Message_MsgDisp("主人公", "It seems like it was an enriching\ntraining camp!");
            Message_Who(0);
            Message_MsgDisp("主人公", "That reminds me, I heard that\nthere's a contest for new fashion\ndesigners.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Since they're holding one, maybe I\nshould apply...");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
