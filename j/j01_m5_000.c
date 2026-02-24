section "j01_m5_000"{
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
    if (Parameter_GetCh1Param(5, 512) == 2){
        System_Call_GS2("J08", "M5", 0);
        }
    else {
        if (Parameter_ChkChar(5, 2) == 0){
            SoundEffect_PlaySE(21, 127);
            System_Wait(#300);
            SoundEffect_StopSE(21, 0);
            if ((Parameter_GetPl1Param(312) == 5) && (Parameter_GetCh1Param(5, 130) <= 3) && (Parameter_GetCh1Param(5, 547) == 0)){
                Voice_PlayVoice("J0105001_E00000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hello?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("J0105001_E00100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Your voice is still cute, even over\nthe telephone.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Voice_PlayVoice("J0105001_E00200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "That time I went *bam* into you and\nyou yelled was cute～, but I also\nlike hearing you say \"eh?\".");
                Message_Who(0);
                Message_MsgDisp("主人公", "Bam...? Ah! T-Thanks. Um, listen.");
                Parameter_InCh1Param(5, 547, 1);
                }
            else if (Parameter_GetCh1Param(5, 130) <= 2){
                Voice_PlayVoice("J0105000_E00000", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hello?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("J0105000_E00100", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Wow, I'm so surprised that you\ncalled me.\nWhat's up?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh...");
                }
            else if (Parameter_GetCh1Param(5, 130) == 3){
                Voice_PlayVoice("J0105000_E00200", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hello?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("J0105000_E00300", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Wow, what a coincidence.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh?");
                Voice_PlayVoice("J0105000_E00400", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I had just wanted to hear your\nvoice▼ What's up?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh...");
                }
            else {
                Voice_PlayVoice("J0105000_E00500", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Hello?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, ｛Chris＊＊｝?\nIt's me, ｛主人公苗字｝\n｛主人公名前｝.");
                Voice_PlayVoice("J0105000_E00600", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "Really?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah.");
                Voice_PlayVoice("J0105000_E00700", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "I'm so happy!\nI was just thinking about you.");
                Voice_PlayVoice("J0105000_E00800", #1, "");
                Message_Who(5);
                Message_MsgDisp("Chris", "So, what can I do for you today?\nSay whatever you want.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Uhh...");
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
            System_Call_GS2("J03", "M5", 0);
            }
        else {
            SoundEffect_PlaySE(21, 127);
            System_Wait(#300);
            SoundEffect_StopSE(21, 0);
            Voice_PlayVoice("J0105000_W00900", #1, "");
            Message_Who(0);
            Message_MsgDisp("Voicemail", "Hello, I'm sorry I can't take your\ncall right now.");
            Voice_PlayVoice("J0105000_W01000", #1, "");
            Message_Who(0);
            Message_MsgDisp("Voicemail", "Please leave a message.");
            Voice_PlayVoice("J0105000_W01100", #1, "");
            Message_Who(0);
            Message_MsgDisp("Voicemail", "I'll get back to you as soon as\npossible.");
            Voice_PlayVoice("J0105000_W01200", #1, "");
            Message_Who(0);
            Message_MsgDisp("Voicemail", "Thank you.");
            SoundEffect_PlaySE(22, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "I guess this is where I leave a\nmessage.\nHmm, what should I do...");
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
                System_Call_GS2("J03", "M5", 0);
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
