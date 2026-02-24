section "b09_m3_000"{
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
        Voice_PlayVoice("B0903000_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It's Hikami.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... ｛Hikami＊＊｝?");
        Voice_PlayVoice("B0903000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nWhen I make promises with someone, I\nalways write it down on a memo.\nSo I'm not the one who was mistaken.");
        Voice_PlayVoice("B0903000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nIn other words, you are at fault.\nYou made me wait for a while today.\nIf you have an excuse, please keep\nit short.");
        SoundEffect_PlaySE(20, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Crap! We had plans for a date!)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, there's a message on my phone's\nvoicemail...\nWho is it...)");
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("B0903000_C00300", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "It's Hikami.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... ｛Hikami＊＊｝?");
        Voice_PlayVoice("B0903000_C00400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nWhen I make promises with someone, I\nalways write it down on a memo.\nSo I'm not the one who was mistaken.");
        Voice_PlayVoice("B0903000_C00500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "...\nIn other words, you are at fault.\nYou made me wait for a while today.\nIf you have an excuse, please keep\nit short.");
        SoundEffect_PlaySE(24, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Crap!\nWe were supposed to meet for our\ndate somewhere else...!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 61, #10);
    Parameter_AddCh1Param(3, 60, #15);
    Parameter_AddCh1Param(3, 62, 15);
    }
