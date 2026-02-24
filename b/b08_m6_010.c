section "b08_m6_010"{
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello.");
        Voice_PlayVoice("B0806010_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Umm, it's me, Amachi...");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Amachi＊＊｝!?");
        Voice_PlayVoice("B0806010_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Senpai, the time we spent together\nwas good...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, I'm sorry.\nHey, I'm busy right now, I'll call\nyou back later.");
        }
    else if (Parameter_GetCh1Param(6, 130) >= 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "Hello.");
        Voice_PlayVoice("B0806010_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Oh, Senpai?");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Amachi＊＊｝!?");
        Voice_PlayVoice("B0806010_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "You know, next time...");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, I'm sorry.\nHey, I'm busy right now, I'll call\nyou back later.");
        }
    }
