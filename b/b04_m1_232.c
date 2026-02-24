section "b04_m1_232"{
    int var0 = Date_GetDateOption(2, 69);
    if (var0 == 0){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 4);
        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401232_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "What's wrong? You...\nhaven't been talking much.");
        Message_MsgSel("I'm glad we enjoyed the view with ease!", "I got sleepy because it was so easygoing.", "The couple behind us was something else.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401232_A00100", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nThe beach appeared close, looking at\nit from here.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 3);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401232_A00200", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Me too.\nThen I guess it would've been better\nif I had slept.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 4);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401232_A00300", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You saw it too, huh. Yeah...\nIt was really something else.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401232_A00400", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Wouldn't it be better if they made\nthe cable cars larger?");
        Message_MsgSel("I don't mind, as long as I can see a lot.", "Are you claustrophobic?", "It's so couples can get closer.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401232_A00500", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You too, huh.\nAll I was doing was looking at the\nocean.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_BlinkStart(1, 2, (#1), 2);
            Character_ChFace(1, 3, 4);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401232_A00600", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "No, I wasn't thinking about that,\nbut you'd surely have trouble\nbreathing in such a narrow space.");
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
            Character_BlinkStart(1, 2, (#1), 1);
            Character_ChFace(0, 3, 4);
            Voice_PlayVoice("B0401232_A00700", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You're quite perverted.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 1);
        Background_Bg_GS2("BG_TR520_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0401232_A00800", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "This sluggish feeling of moving\naround...\nIt might only be the case for a\nferris wheel of this size.");
        Message_MsgSel("It sort of has its charm, doesn't it?", "It would be better if it was slower.", "I'm unsatisfied by the lack of stimulation.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0401232_A00900", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "Yeah.\nI've also grown accustomed to it.\nIt's kinda got this strange feeling\nof simplicity.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            if (Parameter_GetCh1Param(1, 130) <= 3){
                Date_InData_Date(124, 2);
                Date_InData_Date(321, 2);
                Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
                Character_ChFace(1, 2, 3);
                Character_BlinkStart(1, 3, (#1), 2);
                Character_ChFace(1, 3, 1);
                Message_PauseSkinship();
                Voice_PlayVoice("B0401232_A01000", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "Really?\nBut as expected, you wouldn't know\nwhat to do with the time you have,\nright?");
                Message_ResumeSkinship();
                Message_SkinshipSet(1);
                Message_Who(0);
                Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
                Message_SkinshipSet(0);
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0401232_A01100", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "More? Let's ride it once more, then.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Is that okay? You won't get bored?");
                Voice_PlayVoice("B0401232_A01200", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "I won't.\nI've realized that a ferris wheel\nisn't just for looking blankly at\nthe scenery.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Yeah, maybe.");
                Character_ChFace(0, 2, 3);
                Character_BlinkStart(1, 2, (#1));
                Character_ChFace(0, 3, 1);
                Character_ChFace(0, 4, 1);
                Voice_PlayVoice("B0401232_A01300", #1, "");
                Message_Who(1);
                Message_MsgDisp("Saeki", "The cable car is also small...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(...?)");
                }
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0401232_A01400", #1, "");
            Message_Who(1);
            Message_MsgDisp("Saeki", "You could get used to it by riding\nit, couldn't you?\nAnyway, why do you want stimulation\nfrom a ferris wheel?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
