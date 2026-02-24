section "b09_m5_000"{
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
        Voice_PlayVoice("B0905000_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It's me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, it's ｛Chris＊＊｝...");
        Voice_PlayVoice("B0905000_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Did something urgent come up?\nIt would be nice if you didn't get\nsick or anything...");
        Voice_PlayVoice("B0905000_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "But either way, last minute\ncancellations are bad, aren't they?\nI'll see you later.");
        SoundEffect_PlaySE(24, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Crap! We had plans for a date!)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, there's a message on my phone's\nvoicemail...\nWho is it...)");
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("B0905000_E00300", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It's me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, it's ｛Chris＊＊｝...");
        Voice_PlayVoice("B0905000_E00400", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Did something urgent come up?\nIt would be nice if you didn't get\nsick or anything...");
        Voice_PlayVoice("B0905000_E00500", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "But either way, last minute\ncancellations are bad, aren't they?\nI'll see you later.");
        SoundEffect_PlaySE(24, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Crap!\nWe were supposed to meet for our\ndate somewhere else...!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(5, 61, #10);
    Parameter_AddCh1Param(5, 60, #15);
    Parameter_AddCh1Param(5, 62, 15);
    }
