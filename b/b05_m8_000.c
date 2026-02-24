section "b05_m8_000"{
    int var0;
    Character_Chara_GS2(8, "M8_??F", 0);
    Character_ChFace(0, 2, 0);
    Character_ChFace(0, 3, 2);
    if (Date_ChkDateOpen(47) == 1){
        Background_Bg_GS2("BG_NE303_CO_0", #1, #1, 0);
        }
    else if (Date_ChkDateOpen(46) == 1){
        Background_Bg_GS2("BG_NE302_CO_0", #1, #1, 0);
        }
    else if (Date_ChkDateOpen(44) == 1){
        Background_Bg_GS2("BG_NE301_CO_0", #1, #1, 0);
        }
    else {
        Background_Bg_GS2("BG_NE300_CO_0", #1, #1, 0);
        }
    Screen_WipeIn(2);
    Voice_PlayVoice("B0508000_H00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "I'm kinda hungry.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Yes, I am a little hungry, too.");
    Character_ChFace(0, 3, 3);
    Voice_PlayVoice("B0508000_H00100", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Let's go eat then.\nI discovered a place that serves\nreal nice meals earlier.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ehh...\nIs it a little too early for a meal?");
    Character_BlinkStart(8, 2, (#1));
    Character_ChFace(0, 3, 2);
    Voice_PlayVoice("B0508000_H00200", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Hmm, it takes twenty minutes by\ncar...\nand thirty if there's traffic.");
    Character_ChFace(0, 0, 3);
    Voice_PlayVoice("B0508000_H00300", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Let's go.\nStrike the iron while it's hot.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Okay.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Character_Chara_GS2(8, "NON");
    Message_Who(0);
    Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
    var0 = Parameter_GetSysParam(4);
    switch (var0){
        case 0:
        Still_Event("EV_08_31", #1, 0, 1);
        break ;
        case 1:
        Still_Event("EV_08_32", #1, 0, 1);
        break ;
        case 2:
        Still_Event("EV_08_33", #1, 0, 1);
        break ;
        case 3:
        Still_Event("EV_08_34", #1, 0, 1);
        break ;
        }
    System_Wait(5);
    Still_StillFace(0, 0, 4);
    Background_CarBGOpen2("BG_EX170_AU_0");
    Background_CarBGScroll(0);
    Background_CarBGScroll(#1);
    Background_CarBgSpeedChange(#8, 8);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0508000_H00400", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "...\nSo what do you think Wakaouji said\nthen?");
    Character_BlinkStart(8, 2, (#1));
    Still_StillFace(0, 2, 6);
    Still_StillFace(0, 3, 2);
    Voice_PlayVoice("B0508000_H00500", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "\"If you are talking about dozing\noff, it is more efficient to just\nsleep.\"");
    Still_StillFace(0, 0, 4);
    Voice_PlayVoice("B0508000_H00600", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "\"I will teach this class quietly, so\nplease sleep.\"");
    Still_StillFace(0, 2, 2);
    Voice_PlayVoice("B0508000_H00700", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Then he actually lowered his voice\nand wrote on the black board real\nquietly.\nI was so curious I couldn't sleep.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ahaha!\nThat sounds like\n｛Wakaouji＊＊｝.");
    Still_StillFace(0, 2, 0);
    Still_StillFace(0, 3, 5);
    Voice_PlayVoice("B0508000_H00800", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Meaning he hasn't changed that much.\nBut his classes were fun, in many\nways...\nAh!");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh?");
    Still_StillFace(0, 2, 2);
    Still_StillFace(0, 3, 3);
    Voice_PlayVoice("B0508000_H00900", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "I was supposed to take a left\nturn....\nThere are no cars behind either.\nI'll reverse.");
    Background_CarBgSpeedChange(0, 180);
    SoundEffect_PlayStream(3, "SS_DSE_001_000");
    System_Wait(180);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_CarBGClose();
    Still_Event("EV_08_03", #1, 1, 60);
    Environment_PlayME(1, "SN_P_00_015_000", 127, 0);
    Screen_WipeIn(2);
    Voice_PlayVoice("B0508000_H01000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "I got caught up in the moment\ntalking.\nWakaouji's magic is amazing...");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Whoa, his face is really close...\nW-What should I do...)");
    Still_StillFace(0, 0, 1);
    Voice_PlayVoice("B0508000_H01100", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "... Hey.\nIs there something on my face?");
    Message_Who(0);
    Message_MsgDisp("主人公", "No, uhh, umm...\nYour face is just close...");
    Still_StillFace(0, 0, 0);
    Still_StillFace(0, 4, 1);
    Voice_PlayVoice("B0508000_H01200", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Close...\nYou're saying unnecessary things,\nagain...");
    Message_Who(0);
    Message_MsgDisp("主人公", "S-Sorry.");
    Still_StillFace(0, 0, 2);
    Voice_PlayVoice("B0508000_H01300", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "... Don't look.");
    Still_Approach(8, 212, 0, 0, 1, 1);
    Message_Who(0);
    Message_MsgDisp("主人公", "O-Okay.");
    Still_ApproachEnd();
    Environment_StopME(1, 40);
    SoundEffect_PlayStream(3, "SS_DSE_004_000");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Still_Event("");
    Background_CarBGOpen2("BG_EX170_AU_0");
    Background_CarBGScroll(0);
    Background_CarBGScroll(#1);
    Background_CarBgSpeedChange(#8, 180);
    var0 = Parameter_GetSysParam(4);
    switch (var0){
        case 0:
        Still_Event("EV_08_31", #1, 0, 1);
        break ;
        case 1:
        Still_Event("EV_08_32", #1, 0, 1);
        break ;
        case 2:
        Still_Event("EV_08_33", #1, 0, 1);
        break ;
        case 3:
        Still_Event("EV_08_34", #1, 0, 1);
        break ;
        }
    Still_StillFace(0, 4, 0);
    Still_StillFace(0, 0, 2);
    Character_BlinkStart(8, 2, (#1));
    Screen_WipeIn(2);
    Voice_PlayVoice("B0508000_H01400", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "... *Sigh*...");
    Message_Who(0);
    Message_MsgDisp("主人公", "What's the matter?");
    Still_StillFace(0, 2, 1);
    Still_StillFace(0, 3, 2);
    Voice_PlayVoice("B0508000_H01500", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "...\nI know that reversing is dangerous.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh?");
    Still_StillFace(0, 0, 0);
    Voice_PlayVoice("B0508000_H01600", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "I should put a seal on when I'm with\nyou...\nAh, I can see the store's sign.\nGet ready.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Ah, okay.");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Hmm...\nIs putting a seal on the back\npossible?)");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Background_CarBGClose();
    Screen_ClearScreen();
    Music_StopBGM(0, 40);
    Parameter_AddCh1Param(8, 61, 6);
    Parameter_AddCh1Param(8, 60, 3);
    Date_InData_Date(124, 4);
    Date_InData_Date(321, 1);
    System_GlobalWork(5, 0, 1);
    Date_DateEvent(1);
    }
