section "j08_m4_000"{
    if (Parameter_ChkChar(4, 2) == 0){
        SoundEffect_PlaySE(21, 127);
        System_Wait(#300);
        SoundEffect_StopSE(21, 0);
        Voice_PlayVoice("C0104000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hello.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hariya＊＊｝?\nIt's ｛主人公苗字｝\n｛主人公名前｝...");
        Voice_PlayVoice("C0104000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "............ Why are you calling?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Whoa, ｛Hariya＊＊｝ is\nangry...\nWhat should I do～...)");
        Message_Who(0);
        Message_MsgDisp("主人公", "U-Umm...");
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Voice_PlayVoice("C0104000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Is that so....\nDon't do stuff that'll make people\nmisunderstand you!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Okay, sorry.");
        Voice_PlayVoice("C0104000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I said it's fine, so I'll forget\nthis whole thing.\nLater.");
        Voice_PlayVoice("C0104000_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Ah... Thanks for calling.");
        SoundEffect_PlaySE(31, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(I'm so glad...\nIt seems like we've made up.)");
        Parameter_AddCh1Param(4, 62, #99);
        Parameter_AddCh1Param(4, 62, #99);
        Parameter_AddCh1Param(4, 62, #99);
        Parameter_AddCh1Param(4, 62, #99);
        Parameter_AddCh1Param(4, 62, #99);
        Parameter_AddCh1Param(4, 62, 80);
        Parameter_AddCh1Param(4, 62, 80);
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
