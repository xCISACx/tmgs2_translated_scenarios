section "j01_m3_000"{
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
    if (Parameter_GetCh1Param(3, 512) == 2){
        System_Call_GS2("J08", "M3", 0);
        }
    else {
        if (Parameter_ChkChar(3, 2) == 0){
            SoundEffect_PlaySE(21, 127);
            System_Wait(#300);
            SoundEffect_StopSE(21, 0);
            if (Parameter_GetCh1Param(3, 130) >= 4){
                Voice_PlayVoice("J0103000_C00400", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Hello, this is Hikami.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("J0103000_C00500", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Ah, it's you.\nYou called at just the right time,\nI'm taking a break from studying\nright now.");
                Voice_PlayVoice("J0103000_C00600", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "...\nAh, sorry, you didn't call to hear\nme say such things.\n*Erhem*, do you need something?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, uhh...");
                }
            if ((Parameter_GetPl1Param(312) != 3) || (Parameter_GetCh1Param(3, 547) == 1)){
                if (Parameter_GetCh1Param(3, 130) <= 2){
                    Voice_PlayVoice("J0103000_C00000", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Hello, this is Hikami.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                    Voice_PlayVoice("J0103000_C00100", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "So it's you. Do you need something?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Uhh...");
                    }
                else if (Parameter_GetCh1Param(3, 130) == 3){
                    Voice_PlayVoice("J0103000_C00200", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "Hello, this is Hikami.");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                    Voice_PlayVoice("J0103000_C00300", #1, "");
                    Message_Who(3);
                    Message_MsgDisp("Hikami", "So it's you. What's wrong?\nIs there something that you need?");
                    Message_Who(0);
                    Message_MsgDisp("主人公", "Uhh...");
                    }
                }
            else if ((Parameter_GetPl1Param(312) == 3) && (Parameter_GetCh1Param(3, 130) <= 3) && (Parameter_GetCh1Param(3, 547) == 0)){
                Voice_PlayVoice("J0103000_C00700", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Yes, this is Hikami.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("J0103000_C00800", #1, "");
                Message_Who(3);
                Message_MsgDisp("Hikami", "Eh? ... A-Ah, it's you.\nDo you need something?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh...");
                Parameter_InCh1Param(3, 547, 1);
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
            System_Call_GS2("J03", "M3", 0);
            }
        else {
            SoundEffect_PlaySE(21, 127);
            System_Wait(#300);
            SoundEffect_StopSE(21, 0);
            Voice_PlayVoice("J0103000_W00900", #1, "");
            Message_Who(0);
            Message_MsgDisp("Voicemail", "This is the voicemail service.");
            Voice_PlayVoice("J0103000_W01000", #1, "");
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
                System_Call_GS2("J03", "M3", 10);
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
