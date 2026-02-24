section "b04_m4_213"{
    int var0 = Date_GetDateOption(2, 65);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 2, 0);
        Character_ChFace(0, 3, 5);
        Background_Bg_GS2("BG_TR330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404213_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh, I saw it, I saw it! Amazing!\nIt's the first time I saw it!");
        Message_MsgSel("Wah～, how rare!", "The blue of its eyes are beautiful.", "Even if it's white, a tiger is still a tiger!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404213_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "An ordinary tiger would be fine too.\nBut it's also nice that these guys'\nhave a different aura!");
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
            Message_PauseSkinship();
            Voice_PlayVoice("B0404213_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hmm? Oh, you're right.\nYou tend to see things meticulously.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404213_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Do you have any complaints?\nWell, it's to be discriminated,\nthough I'm biased.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404213_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Oh, it roared!?\nDid you hear that just now?");
        Message_MsgSel("I wonder if it wants to return to the wild.", "He roared loudly.", "Maybe he's a bit scared.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(4, 3, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404213_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "He only roared, right?\nYou're overreacting, aren't you?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 1:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404213_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah!\nIts deep voice just came from the\ndiaphragm.\nSo amazing!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404213_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That's just too sudden...\nIt's like you have to prepare your\nmind beforehand, isn't it?");
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
        Background_Bg_GS2("BG_TR330_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0404213_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "By the way, I wonder why he's that\nwhite...?");
        Message_MsgSel("It's a mutation of the white-colored species.", "Maybe his color change is due to stress?", "I heard if you see one, you'll live happily.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404213_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "...\nIt looks like I'm not getting it,\nbut...\nAnyway, you're saying they're\nunusual, right?");
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
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404213_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Seriously? If so, poor guys...\nThey're beautiful, though.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0404213_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Seriously? That's a lie!");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404213_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Ooh. I'm not happy.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Anyway, I'll pray.\nHow about you ｛Hariya＊＊｝?");
                Character_ChFace(0, 2, 0);
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0404213_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "I... I'll pass.");
                Message_Who(0);
                Message_MsgDisp("主人公", "I see.");
                Character_ChFace(0, 2, 4);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404213_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Because you meant it in this current\nstatus, right?\nWhat should I wish aside from this?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 0, 11);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404213_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Huh, nothing!\nUmm, to be big in the future and...");
                Character_ChFace(0, 0, 3);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404213_D01600", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Huh?\nIt's good enough to just take a look\nat it, why do we need to worship it?");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Oh.\nNow that he mentions it, he's\nright...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
