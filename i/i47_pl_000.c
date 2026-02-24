section "i47_pl_000"{
    Background_Bg_GS2("BG_AR400_CO_2", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "(*Phew*... It was busy today.)");
    Voice_PlayVoice("I4700000_W00000", #1, "");
    Message_Who(0);
    Message_MsgDisp("Manager", "You've worked hard.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, Manager. You have worked hard.");
    Voice_PlayVoice("I4700000_W00100", #1, "");
    Message_Who(0);
    Message_MsgDisp("Manager", "You've been working quite hard and\nhave helped out quite a bit.\nSo, I have something to ask...");
    Voice_PlayVoice("I4700000_W00200", #1, "");
    Message_Who(0);
    Message_MsgDisp("Manager", "If it's alright with you, would you\nlike to work here full time after\nyou graduate from school?\nPlease think about it.");
    Message_Who(0);
    Message_MsgDisp("主人公", "O-Okay...");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Working here full time, huh...\nMaybe I should consider it...)");
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_InByParam(4, 55, 1);
    }
