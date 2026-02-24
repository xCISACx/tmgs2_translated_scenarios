section "b15_m8_001"{
    int var0;
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
    Background_CarBGOpen2("BG_EX170_AU_2");
    Background_CarBGScroll(0);
    Background_CarBGScroll(#1);
    Background_CarBgSpeedChange(#8, 8);
    Screen_WipeIn(3);
    Still_StillFace(0, 0, 2);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 0);
    Voice_PlayVoice("XD_08_00_H00800", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "...\nAre you trying to sleep or touch?");
    Message_Who(0);
    Message_MsgDisp("主人公", "Eh! Ah, sorry.");
    Still_StillFace(0, 2, 2);
    Still_StillFace(0, 3, 3);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 0);
    Voice_PlayVoice("XD_08_00_H00900", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Geez...\nYou're like a kid who falls asleep\nhalfway through eating.");
    Still_StillFace(0, 2, 2);
    Still_StillFace(0, 3, 3);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 0);
    Voice_PlayVoice("XD_08_00_H01000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "You would get tired hanging out for\na whole day.\nIt's fine if you want to sleep.");
    Still_StillFace(0, 0, 5);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 1);
    Voice_PlayVoice("XD_08_00_H01100", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "I'd wanna make you sleep for the\nentire ride home.");
    Still_StillFace(0, 2, 2);
    Still_StillFace(0, 3, 3);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 0);
    Voice_PlayVoice("XD_08_00_H01200", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Because there are feelings.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Feelings?");
    Still_StillFace(0, 2, 2);
    Still_StillFace(0, 3, 3);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 0);
    Voice_PlayVoice("XD_08_00_H01300", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "Yeah. Adult situations.");
    Message_Who(0);
    Message_MsgDisp("主人公", "Senpai, I...");
    Still_StillFace(0, 0, 6);
    Still_StillFace(0, 3, 5);
    Still_StillFace(0, 6, 0);
    Still_StillFace(0, 4, 0);
    Voice_PlayVoice("XD_08_00_H01400", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "... Look, there's still time. Sleep.");
    Message_Who(0);
    Message_MsgDisp("主人公", "(Masaki-senpai...)");
    }
