section "b04_m4_232"{
    int var0 = Date_GetDateOption(2, 69);
    Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
    Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
    if (var0 == 0){
        Voice_PlayVoice("B0404232_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Even for just a round, it certainly\ntook a while.");
        Message_MsgSel("I'm glad we enjoyed the view with ease!", "I got sleepy because it was so easygoing.", "The couple behind us was something else.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404232_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah.\nI do like to view the scenery from\nthe top!");
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
            Character_BlinkStart(4, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404232_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, me too...\nAnyway, if it were running a bit\nslower, I would have fallen asleep-.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(4, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404232_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Huh?\nIf you weren't looking at the\nscenery, what were you looking at?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 1){
        Voice_PlayVoice("B0404232_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "When you glance from the top to the\ntown below, do you think of it as\nsilly?");
        Message_MsgSel("Trash is picked up for the redevelopment!", "I did a lot of spacing-out.", "Like, how populated Habataki City is...?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404232_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, like a city-making game!\nIf it were me, I'd start with a road\nand keep it in grids.");
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
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(4, 3, (#1), 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404232_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah, a bit like, you see it but you\nreally can't see it...\nThat kind of stuff, right?\nI get it, I get it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404232_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I never thought of that!\nThat's really silly～, you know?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Voice_PlayVoice("B0404232_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "What are you going to do if you get\ntrapped inside the ferris wheel?");
        Message_MsgSel("I'd be brimming with fear.", "I might be featured on TV!", "I'll embrace ｛Hariya＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404232_D00900", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Right!\nIt's not that I don't like heights,\nbut for longer periods...");
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
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 1);
                Voice_PlayVoice("B0404232_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "What's so great about being on TV?\nI wouldn't be happy about it.\nNot one bit.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Voice_PlayVoice("B0404232_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "There's nothing to be happy about\nbeing featured on TV.");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404232_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "And also, I wouldn't like for you to\nbe featured nationwide.");
                Message_Who(0);
                Message_MsgDisp("主人公", "What do you mean by that?");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404232_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "It doesn't mean anything...\nIt means as it is, literally!");
                Character_ChFace(0, 0, 9);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404232_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "From what I've just said, I don't\nwant other guys to take notice of\nyou...");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh?");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404232_D01500", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "... Shut it, don't question me.\nThink on your own about what I just\nsaid.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝...?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404232_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "If you do that, the balance would\nsway and collapse!\n... So, don't.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
