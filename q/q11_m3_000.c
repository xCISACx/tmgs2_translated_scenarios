section "q11_m3_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(3, "M3_01F", 0);
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(3, 130) == 3){
        Voice_PlayVoice("", 3, "Q0203000_C00000");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Good morning, ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nGood morning.");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(3, 2, (#1));
        Voice_PlayVoice("Q0203000_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Today is a free day.\nHave you decided on what kind of\nplaces you will see?");
        Message_Who(0);
        Message_MsgDisp("主人公", "No, I haven't decided, yet.");
        Voice_PlayVoice("Q0203000_C00200", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Well, I am visiting efficient\nplaces.\nWill you come along for the course\nthat I have planned?");
        Message_MsgSel("Yeah, I'll go!", "I'm glad you asked, but...");
        switch (Message_TextSelect()){
            case 0:
            Voice_PlayVoice("Q0203000_C00300", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Oh, great. Thank you for this.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_GlobalWork(0, 2, 1);
            System_GlobalWork(2, 2, 3);
            System_Call_GS2("Q16", "M3", 0);
            System_Call_GS2("Q17", "M3", 0);
            break ;
            case 1:
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(3, 3, (#1));
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("Q0203000_C00400", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see.\nYour ideas are entirely unplanned.\nWell, I'm going.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all that trouble to\ninvite me...\nMaybe it was wrong to turn him\ndown...)");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            break ;
            }
        }
    else if (Parameter_GetCh1Param(3, 130) >= 4){
        Voice_PlayVoice("Q0203000_C00500", 3, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Good morning, ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Hikami＊＊｝.\nGood morning!");
        Character_ChFace(0, 0, 3);
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("Q0203000_C00600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Today is a free day, correct?\nHave you decided on where you will\nbe going?");
        Message_Who(0);
        Message_MsgDisp("主人公", "No, nothing yet.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("Q0203000_C00700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I see! ...\nA-As a matter of fact, I have\nconfidence in the course I have\nplanned.\nIt is ideal if I do say so myself.");
        Voice_PlayVoice("Q0203000_C00800", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Visiting places alone would be\ndisappointing.\nW-Would you umm...\nlike to go together?");
        Message_MsgSel("Yes, let's go!", "I'm sorry...");
        switch (Message_TextSelect()){
            case 0:
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("Q0203000_C00900", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Wow, a field trip with just the two\nof us...!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(3, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("Q0203000_C01000", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "Ah, nothing, umm...\nNothing, just talking to myself....\nOkay, let us leave at once.");
            Message_CloseMsg();
            Screen_WipeOut(2);
            Screen_ClearScreen();
            System_GlobalWork(0, 2, 1);
            System_GlobalWork(2, 2, 3);
            System_Call_GS2("Q16", "M3", 10);
            System_Call_GS2("Q17", "M3", 0);
            break ;
            case 1:
            Character_ChFace(0, 0, 9);
            Voice_PlayVoice("Q0203000_C01100", #1, "");
            Message_Who(3);
            Message_MsgDisp("Hikami", "I see...\nI am worried about a girl walking\naround alone.\nPlease be careful...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He went through all that trouble to\ninvite me...\nMaybe it was wrong to turn him\ndown...)");
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(3, 86, 1);
    }
