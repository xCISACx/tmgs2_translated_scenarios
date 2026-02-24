section "b04_m4_235"{
    int var0 = Date_GetDateOption(2, 73);
    if (var0 == 0){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0404235_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "It's so amazing!\nThat sound and the velocity...\nI just can't get enough of it～!");
        Message_MsgSel("It was going too fast...", "Going around the curves was awesome!", "I'll explain my theory of maximum speed...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404235_D00100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I kept treading on the accel!\nWell, don't sweat it, I'm Harry,\naren't I?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404235_D00200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "That's the only thing you're good\nat.\nBut, I was a lot faster on the\nstraight tracks.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Voice_PlayVoice("B0404235_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I don't know... What? ...\nSo what is it if you're to explain\nit.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
        Character_ChFace(0, 0, 10);
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0404235_D00400", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Alright, let's go for another round!");
        Message_MsgSel("Let's compete on the next round.", "I'll cheer you on.", "Just don't hurt yourself.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 1);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404235_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Ooh, you're on!\nEven with you as my challenger, I'll\nshow you...\nSo be prepared!");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0404235_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Are you giving up already?\nIt's too early to be tired.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404235_D00700", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Hey, hey, it's me!\nIt's going to be fine! ...\nBut thank you for your concern.");
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
        Background_Bg_GS2("BG_TR550_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0404235_D00800", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Trying racing out is nice.\nI'm longing to consider this a\nprofession.");
        Message_MsgSel("How about if I am to be a Race Queen?", "It's not as easy as you think.", "No, since ｛Hariya＊＊｝ already has singing.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(4, 130) <= 3){
                Date_InData_Date(124, 2);
                Date_InData_Date(321, 2);
                Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0404235_D00900", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Well, if you want to, why not go for\nit?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Voice_PlayVoice("B0404235_D01000", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Well, I guess that's okay...");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404235_D01100", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nOn second thought, that's definitely\nnot a good idea!");
                Message_Who(0);
                Message_MsgDisp("主人公", "Huh, how come?");
                Character_BlinkStart(4, 0, (#1));
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404235_D01200", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Absolutely not!\nI'm firmly against it!");
                Message_Who(0);
                Message_MsgDisp("主人公", "You really wouldn't agree?");
                Character_ChFace(0, 0, 3);
                Character_BlinkStart(4, 3, (#1));
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0404235_D01300", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "...\nIt's not that I don't agree with\nit...!");
                Message_Who(0);
                Message_MsgDisp("主人公", "If ｛Hariya＊＊｝'s against\nit, then I'm not going through with\nit.");
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(4, 2, (#1));
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0404235_D01400", #1, "");
                Message_Who(4);
                Message_MsgDisp("Hariya", "Great!\nThat outfit's absolutely no good....\nExcept in front of me.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(｛Hariya＊＊｝...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0404235_D01500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I do understand that.\nIt's obvious that no matter which\nroad you take, becoming a pro is\ntough.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
            Character_ChFace(1, 2, 0);
            Character_ChFace(1, 3, 5);
            Message_PauseSkinship();
            Voice_PlayVoice("B0404235_D01600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "I was just about to say that!\nI swear, my aim is to become a top\narist.");
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
