section "b04_m4_231"{
    int var0 = Date_GetDateOption(2, 68);
    Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
    Character_ChFace(0, 0, 10);
    Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    if (var0 == 0){
        Voice_PlayVoice("B0404231_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "What, that's it? It ended so quick!");
        Message_MsgSel("Awesome! Let's ride it once more!", "I'm so scared that I can barely stand...", "That was a letdown.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404231_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, it feels great to see the view\nflowing past at high speed.\nLet's go!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404231_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well, that's too bad!\nI was thinking of goin' for another\ngo...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404231_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Oh, you'd still go for it?\nOkay then, next one's going to be a\nstronger one, let's go.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0404231_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "No matter how many times I ride it,\nI never get tired of roller\ncoasters!");
        Message_MsgSel("My heart throbs when we reach the peak.", "Only for ｛Hariya＊＊｝...", "I don't get tired of it, but I get wobbly.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404231_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Just right before the fall..\nit's the most tense moment.\nMy heart beats so fast, too!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Voice_PlayVoice("B0404231_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... I see.\nI'd say, if you didn't want to ride\nit, you should have told me earlier.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404231_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Right.\nLet's take a rest for awhile...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0404231_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "You were about to cry right before\nthe fall, right～?\nI saw you!");
        Message_MsgSel("Were you staring at me?", "Even ｛Hariya＊＊｝ would!", "Because I got really scared.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 2, (#1), 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404231_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Huh?\nYou must have misinterpreted it.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404231_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Huh?\nWrong, it's because you made such a\nfuss...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Because, I don't know what else to\ncry out!");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404231_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "No way, you were the one who wanted\nto go home soon, you really were\nmaking such a fuss!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Did I say that?");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404231_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You said it....\nYou also cried out my name.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, really? ...\nI don't think I did that, did I?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404231_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... You weren't fooled by that.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Ah, you meanie!");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0404231_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Hahaha!\nWell, just by hearing your cries,\nI'll have to let it go this time.");
                }
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404231_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I, umm...\nThe wind was so strong, my eyes\nturned red!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404231_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's good to be honest!\nYou were cute, wobbly and shaken\njust like a little animal.");
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
