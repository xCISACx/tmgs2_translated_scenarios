section "u01_g1_000"{
    int var0 = Parameter_GetPl1Param(12);
    switch (var0){
        case 0:
        Background_Bg_GS2("BG_HO200_?_0", 1, #1, 0);
        break ;
        case 1:
        Background_Bg_GS2("BG_HO210_?_0", 1, #1, 0);
        break ;
        case 2:
        Background_Bg_GS2("BG_HO220_?_0", 1, #1, 0);
        break ;
        case 3:
        Background_Bg_GS2("BG_HO230_?_0", 1, #1, 0);
        break ;
        }
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(22) >= 95){
        Message_Who(0);
        Message_MsgDisp("主人公", "I felt sick today, so I slept.");
        }
    SoundEffect_PlaySE(19, 127);
    Message_Who(0);
    Message_MsgDisp("主人公", "Who is it?");
    SoundEffect_StopSE(19, 0);
    SoundEffect_PlaySE(20, 127);
    if (Parameter_GetCh1Param(10, 64) == 0){
        Voice_PlayVoice("U0110000_J00000", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Oh, ｛Toudou＊＊｝.\nIs something wrong?");
        Voice_PlayVoice("U0110000_J00100", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Today is the premiere of a movie.\nI have a pair of tickets.\nDo you want to go?");
        Message_MsgSel("Yes, I want to go!", "Today is a little...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("U0110000_J00200", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Well then, I'll wait in front of the\ntheater.\nDon't be late.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, see you later.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Oh, a movie premiere...\nWhat a pleasure!)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Parameter_AddCh1Param(10, 60, 5);
            Parameter_SetStateShiftFlg();
            System_Call_GS2("U02", "G1", 0);
            break ;
            case 1:
            Voice_PlayVoice("U0110000_J00300", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Ah, it's okay. I'll go alone then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Sorry... At least you invited me.");
            Voice_PlayVoice("U0110000_J00400", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "No, not really... I just voiced it.\nBye.");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(She went through all that trouble\nto invite me...\nWas it bad to decline?)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Parameter_AddCh1Param(10, 60, #3);
            break ;
            }
        }
    else {
        Voice_PlayVoice("U0110000_J00500", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Me.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Toudou＊＊｝.\nWhat's up?");
        Voice_PlayVoice("U0110000_J00600", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "Are you free today?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Huh, why?");
        Voice_PlayVoice("U0110000_J00700", #1, "");
        Message_Who(10);
        Message_MsgDisp("Toudou", "I have movie tickets...\nDo you want to go with me?");
        Message_MsgSel("Yes, I want to go!", "I'm sorry... It's impossible today...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("U0110000_J00800", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "We'll go together.\nI'll go ahead and wait in front of\nthe theater.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, see ya later!");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(I look forward to going to the\nmovies with ｛Toudou＊＊｝.\nIt'll be fun!)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Parameter_AddCh1Param(10, 60, 5);
            Parameter_SetStateShiftFlg();
            System_Call_GS2("U02", "G1", 0);
            break ;
            case 1:
            Voice_PlayVoice("U0110000_J00900", #1, "");
            Message_Who(10);
            Message_MsgDisp("Toudou", "Ah, well, it's okay. I'll go alone.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah... I'm sorry...");
            SoundEffect_PlaySE(20, 127);
            Message_Who(0);
            Message_MsgDisp("主人公", "(... Did I really have to refuse?\nWhat's wrong with me...)");
            Parameter_AddCh1Param(10, 60, #3);
            Message_CloseMsg();
            Screen_WipeOut(2);
            break ;
            }
        }
    Parameter_InPl1Param(339, #1);
    }
