section "b04_m4_163"{
    int var0 = Date_GetDateOption(2, 47);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE430_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404163_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Well, let's do this!");
        Message_MsgSel("Music games are fun!", "Can I take a picture of you dancing?", "Can you play, ｛Hariya＊＊｝?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0404163_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I think it's fun, but I've never\ntried it.\nI see you like it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404163_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Okay! Take it with style!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404163_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Try to follow my beat, it's a piece\nof cake.\nJust watch!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE430_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404163_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...\nDon't you think the sound's too\nloud?");
        Message_MsgSel("Practice makes perfect.", "It's getting really loud.", "Everyone's looking, so do your best.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404163_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Is that so?\nYeah, but it's better if you dance\nwith it in a high volume.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404163_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hey, this is no different from\nlives.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0404163_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Don't say it that way!\nNow I feel nervous!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE430_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404163_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Phew～ Hey, how was my steps?");
        Message_MsgSel("Should have danced with you.", "You do feel the beat.", "It was so cool!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404163_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Haha, inspired by my splendid dance?\nFine, I'll dance!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404163_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "If I had no beat, I think I wouldn't\nbe able to survive with music.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404163_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I guess so! ... You're slow at it.\nBarely clearing it every time～.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ugh...\nCan I be as good as\n｛Hariya＊＊｝?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404163_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You can!\nI'll show you how to break it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Really? It might take a lot of time.");
                Character_ChFace(0, 0, 10);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404163_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Oh. If you'd like, even for life...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404163_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Anyway, if you have the time to\nchat, dance instead.");
                }
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 5);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404163_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "See?\nYou're about to be the next big\nartist of the future, for sure!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
