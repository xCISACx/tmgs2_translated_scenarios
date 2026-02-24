section "b04_m4_146"{
    int var0 = Date_GetDateOption(2, 41);
    Background_Bg_GS2("BG_NE270_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_100_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    if (var0 == 0){
        Message_MsgSel("That talk was the best!", "That talk was so-so.", "That talk was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(4, 3, (#1));
            Voice_PlayVoice("B0404146_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Which part? Not funny at all! ...\nI'm going home!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("B0404146_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Never coming back...\nIf you say that this is okay, you've\nbrought your taste down...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 9);
            Character_BlinkStart(4, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404146_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ah, yeah...\nStill, I never got scared at all...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0404146_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "A～Ah, I never got scared at all!\nBo-ring!");
        Message_MsgSel("Were you trembling when you said that?", "You're reassuring, ｛Hariya＊＊｝.", "Such a trick is for kids.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0404146_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Shut up!\nThat's not it, that was a ghost\nwarrior!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404146_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, you got scared of that? L-Loser!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404146_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You're cold...\nIn that case, you should not have\ncome along.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0404146_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Don't they say that ghosts often\nappear around here...?");
        Message_MsgSel("Kyaa～!!", "If there's a ghost, let's take a picture.", "I hate that kind of talk.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0404146_D00800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Woah! W-What was it?\nDid you see something? Hey!!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 4);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0404146_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "So... Sorry!\nI never thought you'd get that\nscared!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Argh, I really got scared...\nStupid, ｛Hariya＊＊｝!");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404146_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "H-Hey... don't cry... You got me...");
                Message_Who(0);
                Message_MsgDisp("主人公", "...Just kidding.");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404146_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Why... Why you...!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Because you were mean. Oh...");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0404146_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hey... What made you stiff? ...\nIs it that...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "...............");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0404146_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Forget it. Don't say anything.\nJust don't say it... Let's go home.");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404146_D01400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You're so calm.\nSay, I don't want my picture to be\ntaken with a ghost.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404146_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You too! I'm not into it either...\nSo, you don't have to get that mad!\nOkay?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    }
