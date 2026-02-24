section "b09_m4_000"{
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
        Voice_PlayVoice("B0904000_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Hey. You've got some nerve...");
        Message_Who(0);
        Message_MsgDisp("主人公", "This voice...\n｛Hariya＊＊｝!?");
        Voice_PlayVoice("B0904000_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...\nIf you stand me up next time, you\nwon't get another chance!\nBye!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Damn it!\nI forgot about we had plans for a\ndate!)");
        SoundEffect_PlaySE(24, 127);
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ah, there's a message on my phone's\nvoicemail...\nWho is it...)");
        SoundEffect_PlaySE(20, 127);
        Voice_PlayVoice("B0904000_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Hey. You've got some nerve...");
        Message_Who(0);
        Message_MsgDisp("主人公", "This voice...\n｛Hariya＊＊｝!?");
        Voice_PlayVoice("B0904000_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...\nIf you stand me up next time, you\nwon't get another chance!\nBye!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(What have I done...\nI got the meeting place of the date\nwrong!)");
        SoundEffect_PlaySE(24, 127);
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Parameter_AddCh1Param(4, 61, #10);
    Parameter_AddCh1Param(4, 60, #15);
    Parameter_AddCh1Param(4, 62, 15);
    }
