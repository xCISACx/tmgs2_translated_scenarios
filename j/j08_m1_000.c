section "j08_m1_000"{
    if (Parameter_ChkChar(1, 2) == 0){
        SoundEffect_PlaySE(21, 127);
        System_Wait(#300);
        SoundEffect_StopSE(21, 0);
        Voice_PlayVoice("C0101000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yes... Hello.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝.\nIt's ｛主人公苗字｝\n｛主人公名前｝...");
        Voice_PlayVoice("C0101000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah... What's up?\nWhy are you calling me at this hour?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Whoa, this is awkward～!\nBut I have to have a proper talk\nwith him...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "Umm, ｛Saeki＊＊｝...");
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Voice_PlayVoice("C0101000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Hmph. And?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Y-Yeah... So...");
        Voice_PlayVoice("C0101000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "You gotta be kidding me.\nDon't go acting all weird.\nIt's not like you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Yeah.");
        Voice_PlayVoice("C0101000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Alright. I'm hanging up then.\nI've gotta do stuff for Sangosho.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, bye.");
        Voice_PlayVoice("C0101000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah... Thanks for calling.");
        SoundEffect_PlaySE(31, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Thank gosh.\nIt somewhat seems like he has\nunderstood.)");
        Parameter_AddCh1Param(1, 62, #99);
        Parameter_AddCh1Param(1, 62, #99);
        Parameter_AddCh1Param(1, 62, #99);
        Parameter_AddCh1Param(1, 62, #99);
        Parameter_AddCh1Param(1, 62, #99);
        Parameter_AddCh1Param(1, 62, 80);
        Parameter_AddCh1Param(1, 62, 80);
        }
    else {
        SoundEffect_PlaySE(23, 127);
        Message_Who(0);
        Message_MsgDisp("　　　", "*beep* *beep* *beep* ......");
        SoundEffect_StopSE(23, 0);
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like I can't connect...)");
        }
    }
