section "i76_pl_000"{
    Background_Bg_GS2("BG_AR700_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetByParam(7, 52) <= 139){
        Message_Who(0);
        Message_MsgDisp("主人公", "Alright...\nYeah, it seems like it's fine.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I've gotten quite used to working\nhere.)");
        }
    else if ((Parameter_GetByParam(7, 52) >= 140) && (Parameter_GetByParam(7, 52) <= 199)){
        Voice_PlayVoice("H7600000_W00000", #1, "");
        Message_Who(0);
        Message_MsgDisp("President", "So, trying to jump at that place?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes.... Wah, an enemy! Ah!");
        Music_StopBGM(0, 40);
        SoundEffect_PlaySE(324);
        Voice_PlayVoice("H7600000_W00100", #1, "");
        Message_Who(0);
        Message_MsgDisp("President", "Hey, you. Don't hesitate.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Sorry...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Hmm, I have to focus.)");
        }
    else if (Parameter_GetByParam(7, 52) >= 200){
        Voice_PlayVoice("H7600000_W00200", #1, "");
        Message_Who(0);
        Message_MsgDisp("President", "Did you get rid of the reappearance\nof the bug at 573?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, it was a stability bug.\nI summarized it in a report and\nhanded it to a programmer.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I've found a different bug, so I am\nconfirming if it will happen again.");
        Message_Who(0);
        Message_MsgDisp("主人公", "I also have plans to rework some\nthings.");
        Voice_PlayVoice("H7600000_W00400", #1, "");
        Message_Who(0);
        Message_MsgDisp("President", "Yeah. I'm counting on you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I'm already at the stage where I\nwould be called a veteran.\nBut I still have to do my best\nwithout cutting corners!)");
        }
    Message_CloseMsg();
    SoundEffect_StopStream(0, 40);
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
