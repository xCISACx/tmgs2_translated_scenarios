section "b04_m4_191"{
    int var0 = Date_GetDateOption(2, 61);
    Effect_OpenParticle(1);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 0, 11);
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404191_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "The fallen leaves covered the street\nlike a carpet.");
        Message_MsgSel("The leaves look like a baby's hand.", "The red and yellow trees are beautiful.", "Ah! There's a bagworm!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404191_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That's a cliche comment.\nActually, that's totally wrong.");
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
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404191_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You fully feel the autumn foliage!\nWoah.\nLook, those mountains over there are\nbright red too!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 9);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404191_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ack, where is it!? ...\nThere's nothing here.\nTrying to surprise me, huh...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404191_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "When the wind blows, the leaves\ndance together with it.");
        Message_MsgSel("You can make roasted yams, having this much.", "What happened with the swept up fallen leaves?", "Winter's almost here.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(4, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404191_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That's impossible within these\nmountains!\nThere'll be stalls later on and you\ncan eat all you want.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404191_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I'm curious too!\nThe mountain trails don't need to be\ncleaned, so the soil is waiting\nnaturally to return to the earth.");
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
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404191_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I don't like winter～...\nUnless, there's a kotatsu, I would\nlove that.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 0, 9);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR110_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404191_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Woah, cold!\nThe wind is getting really chilly...");
        Message_MsgSel("It's a winter wind sprite's mischief▼", "I wish ｛Hariya＊＊｝ could warm me up.", "Please don't catch a cold.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0404191_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Cold!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 0, 8);
                Character_BlinkStart(4, 3, (#1));
                Voice_PlayVoice("B0404191_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Woah, did you just seriously say\nthat to me!?\nArgh! This cold is way too much!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404191_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...... Huh?");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Uhh...");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 0);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404191_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...... Hands.");
                Message_Who(0);
                Message_MsgDisp("主人公", "... Huh?");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404191_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I told you! ...Just the hands!\nThere's nothing I can do to keep\nmyself warm.");
                Character_BlinkStart(4, 2, (#1));
                Voice_PlayVoice("B0404191_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Just do it and hurry up!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Oh, okay.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝...)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404191_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah. Thank you for your concern.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    Effect_CloseParticle();
    }
