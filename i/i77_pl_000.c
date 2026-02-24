section "i77_pl_000"{
    Background_Bg_GS2("BG_AR700_CO_2", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(*Phew*... It was busy today.)");
    Voice_PlayVoice("H7700000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("President", "You've worked hard.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, Director. You have worked hard.");
    Voice_PlayVoice("H7700000_W00100", #1, "");
    Message_Who(0);
    Message_MsgDisp("President", "You've been working quite hard and\nhave helped out quite a bit.\nSo, I have something to ask...");
    Voice_PlayVoice("H7700000_W00200", #1, "");
    Message_Who(0);
    Message_MsgDisp("President", "If it's alright with you, would you\nlike to work here full time after\nyou graduate from school?\nPlease think about it.");
    Message_Who(0);
    Message_MsgDisp("主人公", "O-Okay...");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Working here full time, huh...\nMaybe I should consider it...)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_InByParam(7, 55, 1);
    }
