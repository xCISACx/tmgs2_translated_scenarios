section "j08_m2_000"{
    if (Parameter_ChkChar(2, 2) == 0){
        SoundEffect_PlaySE(21, 127);
        System_Wait(#300);
        SoundEffect_StopSE(21, 0);
        Voice_PlayVoice("C0102000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Yes?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝.\nIt's ｛主人公苗字｝\n｛主人公名前｝...");
        Voice_PlayVoice("C0102000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nIf you don't have urgent business,\ncall me some other day.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Whoa, he's angry...\nBut I have to have a proper talk\nwith him...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "U-Umm, ｛Shiba＊＊｝...");
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Voice_PlayVoice("C0102000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Okay.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yeah, sorry.");
        Voice_PlayVoice("C0102000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I'm not worried anymore....\nSorry for having you call me.");
        SoundEffect_PlaySE(31, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Thank gosh.\nIt somewhat seems like he has\nforgiven me.)");
        Parameter_AddCh1Param(2, 62, #99);
        Parameter_AddCh1Param(2, 62, #99);
        Parameter_AddCh1Param(2, 62, #99);
        Parameter_AddCh1Param(2, 62, #99);
        Parameter_AddCh1Param(2, 62, #99);
        Parameter_AddCh1Param(2, 62, 80);
        Parameter_AddCh1Param(2, 62, 80);
        }
    else {
        SoundEffect_PlaySE(23, 127);
        SoundEffect_PlaySE(23, 127);
        Message_Who(0);
        Message_MsgDisp("　　　", "*beep* *beep* *beep* ......");
        SoundEffect_StopSE(23, 0);
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(It seems like I can't connect...)");
        }
    }
