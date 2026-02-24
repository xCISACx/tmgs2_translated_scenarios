section "b09_m1_000"{
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
        Voice_PlayVoice("B0901000_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, it's me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(... ｛Saeki＊＊｝?)");
        Voice_PlayVoice("B0901000_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Idiot!!");
        Voice_PlayVoice("B0901000_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "That's all.");
        SoundEffect_PlaySE(24, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Oh no! We had plans for a date!)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, there's a message on my phone's\nvoicemail...\nWho is it...)");
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("B0901000_A00300", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Ah, it's me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(... ｛Saeki＊＊｝?)");
        Voice_PlayVoice("B0901000_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Idiot!!");
        Voice_PlayVoice("B0901000_A00500", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "That's all.");
        SoundEffect_PlaySE(24, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Crap!\nWe were supposed to meet somewhere\nelse for our date...!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(1, 61, #10);
    Parameter_AddCh1Param(1, 60, #15);
    Parameter_AddCh1Param(1, 62, 15);
    }
