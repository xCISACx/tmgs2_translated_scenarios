section "b04_m2_233"{
    int var0 = Date_GetDateOption(2, 70);
    if (var0 == 0){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402233_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "*Sigh*.........");
        Message_MsgSel("I felt like a princess▼", "It was a little embarrassing.", "I wanted you to ride the white horse.");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1));
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402233_B00100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nBask in that feeling by yourself.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_BlinkStart(2, 0, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402233_B00200", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Isn't it? ...\nYou realized it too late.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402233_B00300", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Who are you talking to?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 0);
        Character_ChFace(0, 4, 1);
        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402233_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... The people looking at us...\nJust being stared at like that is\nenough to make my body go numb...");
        Message_MsgSel("Because you looked so picturesque▼", "Because you had a scary face on...", "A-Are you okay?");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402233_B00500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I'm about to get pissed off.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 3, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402233_B00600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I'm scared, as well.\nSeriously, give me a break...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402233_B00700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... I am. I'm still fine.\nI have to be mentally strong...");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(2, "M2_??F", 0, 1, 0);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_TR530_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Music_PlayBGM(0, "MN_B_TR_500_000", 127, 40);
        Voice_PlayVoice("B0402233_B00800", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nI didn't think we'd ride it again.\nI wonder why I ride it.");
        Message_MsgSel("Thanks for always coming with me.", "It'll be fine if you get used to it, right?", "I want you to come here with me again▼");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(2, "M2_??F", 0, 1, 1);
            Character_ChFace(1, 3, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0402233_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "I'm not gonna be fooled by that....\nBut I am already used to it.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 1);
            Character_BlinkStart(2, 2, (#1), 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0402233_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "That's not the problem.");
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
                Voice_PlayVoice("B0402233_B01100", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "I refuse.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_BlinkStart(2, 3, (#1));
                Voice_PlayVoice("B0402233_B01200", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "*Sigh*...... Hey.");
                Message_Who(0);
                Message_MsgDisp("主人公", "What?");
                Character_BlinkStart(2, 2, (#1));
                Voice_PlayVoice("B0402233_B01300", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Why do you make me ride this?\nIf it's a horse, you can ride it by\nyourself...");
                Message_Who(0);
                Message_MsgDisp("主人公", "You're right. Sorry...");
                Character_ChFace(0, 0, 11);
                Voice_PlayVoice("B0402233_B01400", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "Ah...\nno, I didn't mean it like that.");
                Character_ChFace(0, 0, 3);
                Voice_PlayVoice("B0402233_B01500", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "... Sorry.\nYou enjoyed the ride a lot though,\ndidn't you?");
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0402233_B01600", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "If you're going to make that kinda\nface, I'll ride this however many\ntimes you want, so you won't make\nthat face, again.");
                Message_Who(0);
                Message_MsgDisp("主人公", "｛Shiba＊＊｝...");
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0402233_B01700", #1, "");
                Message_Who(2);
                Message_MsgDisp("Shiba", "So, should we move on?\nWhat do you wanna do?");
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
