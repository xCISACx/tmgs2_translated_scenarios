section "b04_m4_141"{
    int var0 = Date_GetDateOption(2, 36);
    Background_Bg_GS2("BG_NE220_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_095_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_MsgSel("That live was the best!", "That live was so-so.", "That live was disappointing.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404141_D00000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I couldn't help but want to go home\nin the middle of it.\n*Yawn～*...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1);
            Voice_PlayVoice("B0404141_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well yeah.\nBut, honestly speaking, it didn't\nmake me laugh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404141_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well, can't be helped.\nSometimes these things happens.\nWell, let's go home!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(4, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404141_D00300", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "*Sigh* I feel tired.\nWhat a pain in the butt.");
        Message_MsgSel("I believe everyone thinks the same too.", "Is it not to your liking, ｛Hariya＊＊｝?", "I wanted a more burning sensation.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0404141_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "In this case, how it went has\nnothing to do with everyone else.\nHow was it for you then?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404141_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "The problem is the lack of interest.\nSimply boring.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404141_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Right!\nMore enthusiasm and a better\nperformance, or the audience won't\ngo along!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_NE210_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404141_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Those guys on stage all looked\nhappy.\nOr I should say, they were glowing.");
        Message_MsgSel("The same with you, ｛Hariya＊＊｝.", "It's because they love what they're doing.", "You'd want to do the same thing!");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404141_D00800", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nHave you really seen me play on\nstage?\nI'm saying that's inappropriate.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0404141_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nIf you do well enough, it'll feel\nreally great.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, I know. It looks really fun.");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404141_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hahaha...\nIt'll go well if you're the only\nspectator around...");
                Character_ChFace(0, 2, 2);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404141_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Will there be a time where I'll\nlaugh like that and won't feel\nnervous no matter who's in front of\nme...?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404141_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I wouldn't know until I try it,\nbut...\nThat's a cold way to say it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404141_D01300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah.\nI feel like singing very badly!\nAfter this, let's go to a karaoke!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    }
