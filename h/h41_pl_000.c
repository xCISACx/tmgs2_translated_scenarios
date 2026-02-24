section "h41_pl_000"{
    Background_Bg_GS2("BG_SC100_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Yeah, I'll join the Cheerleading\nClub!");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_Bg_GS2("BG_SCA40_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("H4100000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Club President", "We have a group club practice every\n3rd Sunday of the month.\nYou must be present.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay!\nI look forward to working with you!");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Alright, I'll do my best!)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    if (Parameter_GetCh1Param(6, 514) == 1){
        System_Call_GS2("H41", "M6", 0);
        }
    }
