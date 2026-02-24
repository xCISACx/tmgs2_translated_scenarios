section "b04_m4_234"{
    int var0 = Date_GetDateOption(2, 71);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(4, 3, (#1));
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0404234_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "We finally got out...");
        Message_MsgSel("It was scary, but I enjoyed being with you!", "I was so scared I shut my eyes...", "It felt like it was just childish tricks!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_BlinkStart(4, 0, (#1), 2);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404234_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "R-Right! No, I wasn't scared!\nHahaha!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404234_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Even though I didn't look around,\nthat scream...\nDon't get me scared...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_BlinkStart(4, 0, (#1), 1);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404234_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "... Just a trick for kids.\nThen again, maybe I'm a kid.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(4, 3, (#1));
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0404234_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "...\nDarn, I never thought I'd scream...");
        Message_MsgSel("This place has a good reputation.", "Maybe it was just a free vocal lesson?", "Don't tell me you really got scared?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404234_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "With this kind of reputation, my\nlife is at an end...");
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
            Character_BlinkStart(4, 0, (#1), 2);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404234_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Y-Yeah! It was a shout, a shout!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_BlinkStart(4, 0, (#1));
            Character_ChFace(0, 2, 1);
            Voice_PlayVoice("B0404234_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That's not it! I shouted because...\numm...\nThe reason is because I wanted to\nshout!\n...*sigh*");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR540_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0404234_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "... Hey.\nSomething flew by just a while ago.");
        Message_MsgSel("And you got scared, ｛Hariya＊＊｝.", "It was a nicely done gimmick.", "I'm so scared that I want to go home.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 2);
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(4, 3, (#1), 1);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0404234_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I-It was just to make you feel\nsurprised!\nIt doesn't mean that I got scared!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404234_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... You know, my mom's a psychic.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh......");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0404234_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "When strange things walk by\nsometimes...\nThose things, I'll tell you all\nabout it.");
                Voice_PlayVoice("B0404234_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "You'd get scared even if you don't\nlike it.\nThis place gives me the chills.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I never knew that...\nI'm sorry for dragging you along.");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404234_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nIf you weren't here, I wouldn't come\nto a place like this.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 0, 8);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404234_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I mean, you!\nIt's because you wanted to go in,\nI'd never go into a place such as\nthis!");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404234_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Just...\nForget about it, from now on just\ntell me if you want to.");
                Voice_PlayVoice("B0404234_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I'll be fine, if you're next to me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 0, 8);
            Character_BlinkStart(4, 3, (#1));
            Voice_PlayVoice("B0404234_D01700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "What's with the cold reaction? ...\nIn such a place, I've had enough,\nI'm going home!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404234_D01800", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I see. Yeah, right! Let's do that!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
