section "j01_m1_000"{
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
        if (Parameter_ChkChar(1, 2) == 0){
            SoundEffect_PlaySE(21, 127);
            System_Wait(#300);
            SoundEffect_StopSE(21, 0);
            if (Parameter_GetCh1Param(1, 130) >= 4){
                Voice_PlayVoice("J0101000_A00500", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Hello? What's up?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("J0101000_A00600", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Ah, I was just about to call you.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really? What for?");
                Voice_PlayVoice("J0101000_A00700", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Umm... No, you go first.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh...");
                }
            if ((Parameter_GetPl1Param(312) != 1) || (Parameter_GetCh1Param(1, 547) == 1)){
                if (Parameter_GetCh1Param(1, 130) <= 2){
                    Voice_PlayVoice("J0101000_A00000", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Yes, this is Saeki.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                    Voice_PlayVoice("J0101000_A00100", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "... Pardon?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Umm, it's ｛主人公苗字｝\n｛主人公名前｝...");
                    Voice_PlayVoice("J0101000_A00200", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Ah... Do you need something?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Uhh...");
                    }
                else if (Parameter_GetCh1Param(1, 130) == 3){
                    Voice_PlayVoice("J0101000_A00300", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "Hello?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                    Voice_PlayVoice("J0101000_A00400", #1, "");
                    Message_Who(1);
                    Message_MsgDisp("Saeki", "I know, your number shows up on my\nphone screen.\nSo, do you need something?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Uhh...");
                    }
                }
            else if ((Parameter_GetPl1Param(312) == 1) && (Parameter_GetCh1Param(1, 130) <= 3) && (Parameter_GetCh1Param(1, 547) == 0)){
                Voice_PlayVoice("J0101000_A00800", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "... Hello.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Saeki＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("J0101000_A00900", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I know....\nAre you calling about that thing?");
                Message_Who(0);
                Message_MsgDisp("主人公", "About that thing?");
                Voice_PlayVoice("J0101000_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "It's nothing.\nIt's fine, as long as you're not\ncalling about that....\nSo?");
                Parameter_InCh1Param(1, 547, 1);
                }
            Message_CloseMsg();
            Message_CloseMsg(15);
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
            System_Call_GS2("J02", "PL", 0);
            System_Call_GS2("J03", "M1", 0);
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
                Message_CloseMsg(15);
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
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    }
