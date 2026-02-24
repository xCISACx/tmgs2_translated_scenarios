section "b09_m2_000"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_2", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_2", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_2", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_2", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    if (System_GlobalWork(7, 1) == 0){
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, there's a message on my phone's\nvoicemail...\nWho is it...)");
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("B0902000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's me, Shiba.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh, ｛Shiba＊＊｝?");
        Voice_PlayVoice("B0902000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "About today.... Was I mistaken?");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Eh?)");
        Voice_PlayVoice("B0902000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "No... I wasn't... was I?\nAnyway, I was waiting.\nFor a long time. Later...");
        SoundEffect_PlaySE(24, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Crap!\nWe had plans for a date today!)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, there's a message on my phone's\nvoicemail...\nWho is it...)");
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("B0902000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It's me... Shiba.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
        Voice_PlayVoice("B0902000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "I was waiting forever at that\nplace...");
        Voice_PlayVoice("B0902000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "If you're not gonna come, tell me.\nI'm really tired from all the\nwaiting...\nLater.");
        SoundEffect_PlaySE(24, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Crap!\nWe were supposed to meet for our\ndate somewhere else...!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 61, #10);
    Parameter_AddCh1Param(2, 60, #15);
    Parameter_AddCh1Param(2, 62, 15);
    }
