section "j01_m1_001"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_0", 1, 1);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_0", 1, 1);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_0", 1, 1);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_0", 1, 1);
        break ;
        }
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(1, 512) == 2){
        System_Call_GS2("J08", "M1", 0);
        }
    else {
        SoundEffect_PlaySE(21, 127);
        System_Wait(#300);
        SoundEffect_StopSE(21, 0);
        Voice_PlayVoice("J0101000_W01100", #1, "");
        Message_Who(0);
        Message_MsgDisp("Voicemail", "This is the voicemail service.");
        Voice_PlayVoice("J0101000_W01200", #1, "");
        Message_Who(0);
        Message_MsgDisp("Voicemail", "They are not available to answer\nyour call right now.\nPlease leave a message.");
        SoundEffect_PlaySE(22, 127);
        Message_Who(0);
        Message_MsgDisp("主人公", "Hmm, what should I do...");
        Message_MsgSel("Leave a message.", "Hang up.");
        switch (Message_TextSelect()){
            case 0:
            Message_CloseMsg();
            Screen_WipeOut(2);
            Run_Date_Day();
            while (Run_Date_Place() == #1){
                var0 = Parameter_GetPl1Param(12);
                switch (var0){
                    case 0:
                    Background_Bg_GS2("BG_HO200_?_0", 1, 1);
                    break ;
                    case 1:
                    Background_Bg_GS2("BG_HO210_?_0", 1, 1);
                    break ;
                    case 2:
                    Background_Bg_GS2("BG_HO220_?_0", 1, 1);
                    break ;
                    case 3:
                    Background_Bg_GS2("BG_HO230_?_0", 1, 1);
                    break ;
                    }
                Run_Date_Day();
                }
            var0 = Parameter_GetPl1Param(12);
            switch (var0){
                case 0:
                Background_Bg_GS2("BG_HO200_?_0", 1, 1);
                break ;
                case 1:
                Background_Bg_GS2("BG_HO210_?_0", 1, 1);
                break ;
                case 2:
                Background_Bg_GS2("BG_HO220_?_0", 1, 1);
                break ;
                case 3:
                Background_Bg_GS2("BG_HO230_?_0", 1, 1);
                break ;
                }
            Screen_WipeIn(2);
            System_Call_GS2("J02", "PL", 10);
            System_Call_GS2("J03", "M1", 10);
            break ;
            case 1:
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "It can't be helped.\nI'll call him again next time.");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    }
