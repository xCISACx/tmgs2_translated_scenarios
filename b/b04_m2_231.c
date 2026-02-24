section "b04_m2_231"{
    int var0 = Date_GetDateOption(2, 68);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402231_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "*phew* That was kinda momentary.\nHow did you find it?");
        Message_MsgSel("Awesome! Let's ride it once more!", "I'm so scared that I can barely stand...", "That was a letdown.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402231_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Okay.\nI'm glad that you like this ride.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_BlinkStart(2, 3, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402231_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nIf you don't like this, then you\nshould've told me earlier.\nIt's not like I'd get mad.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(2, 2, (#1), 2);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402231_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Eh...\nYou've got a \"I can still ride this\"\nface on.\nShould we go ride a faster one?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402231_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "It'd still be a good ride if it was\na little faster.\nAnd more turns.");
        Message_MsgSel("And longer, too!", "And more danger, too!", "And higher up, too!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402231_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah, right, that too.\nIf it had those three things, it'd\nbe quite thrilling.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402231_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Danger... what kind?\nBut if it was too reckless, it'd be\ndangerous.");
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
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("B0402231_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "No...\nAdding more height is a little...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402231_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "You look a little sick.\nAre you tired?");
        Message_MsgSel("Yeah, maybe I should rest a little...", "No, I'm p-perfectly fine!", "You look sick, ｛Shiba＊＊｝.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402231_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Yeah.\nYou know, I won't know unless you\ntell me, so if you've had enough,\ntell me, okay?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_BlinkStart(2, 0, (#1), 1);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402231_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Liar.\nNo matter how I look at your face,\nyou're pale.\nDon't force yourself.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            if (Parameter_GetCh1Param(2, 130) <= 3){
                Date_InData_Date(124, 0);
                Date_InData_Date(321, 3);
                Character_ChFace(0, 2, 1);
                Character_BlinkStart(2, 3, (#1));
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402231_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I don't....\nEven though I actually have dark\nskin.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0402231_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "It's becoming that way.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Eh...?\nAre you perhaps tired too,\n｛Shiba＊＊｝?");
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402231_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "...\nBecause you were sitting next to me,\nand your complexion gradually grew\nworse.");
                Character_BlinkStart(2, 0, (#1));
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 0);
                Voice_PlayVoice("B0402231_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Don't bear the pain. Please.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Okay... Sorry.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402231_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Let's take a short break.\nDo you wanna drink something?");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah...");
                Character_ChFace(0, 2, 2);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0402231_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I'm not blaming you, so don't make\nthat face.\nI also wanted to rest.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402231_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Go sit over there.\nI'll come back with something to\ndrink.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Thank you,\n｛Shiba＊＊｝...)");
                }
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
