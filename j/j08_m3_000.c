section "j08_m3_000"{
    if (Parameter_ChkChar(3, 2) == 0){
        SoundEffect_PlaySE(21, 127);
        System_Wait(#300);
        SoundEffect_StopSE(21, 0);
        Voice_PlayVoice("C0103000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "This is Hikami.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nIt's ｛主人公苗字｝\n｛主人公名前｝...");
        Voice_PlayVoice("C0103000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "......... So it's you.\nDo you have urgent business with me?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Whoa, this is awkward～.\nBut I have to have a proper talk\nwith him...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "U-Umm...");
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Voice_PlayVoice("C0103000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nI understand what you want to say.\nIt is something that I would not\nunderstand unless I asked.");
        Voice_PlayVoice("C0103000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... I am glad that you called.\nI will see you later.");
        SoundEffect_PlaySE(31, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I'm so relieved...\nIt seems like he has forgiven me.)");
        Parameter_AddCh1Param(3, 62, #99);
        Parameter_AddCh1Param(3, 62, #99);
        Parameter_AddCh1Param(3, 62, #99);
        Parameter_AddCh1Param(3, 62, #99);
        Parameter_AddCh1Param(3, 62, #99);
        Parameter_AddCh1Param(3, 62, 80);
        Parameter_AddCh1Param(3, 62, 80);
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
